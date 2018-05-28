import sys
import re
import sys
import glob, os
from sets import Set
import cStringIO
import json
from pprint import pprint
import subprocess
import api_generation

CONFIG = {}
def findVTKHeaders(VTKIncludes):
	somelist = VTKIncludes.split(";")
	somelist[:] = [url for url in somelist if any(sub in url for sub in ['vtk'])]
	return somelist

def comment_remover(text):
    def replacer(match):
        s = match.group(0)
        if s.startswith('/'):
            return " " # note: a space and not an empty string
        else:
            return s
    pattern = re.compile(
        r'//.*?$|/\*.*?\*/|\'(?:\\.|[^\\\'])*\'|"(?:\\.|[^\\"])*"',
        re.DOTALL | re.MULTILINE
    )
    return re.sub(pattern, replacer, text)

def find_between( s, first, last ):
    r = s
    D = ""
    done = False

    while(not done):
        start = 0
        try:
            start = r.index( first ) + len( first )
            end = r.index( last, start )
            D += r[start:end]
        except ValueError:
            done = True
        r = r[start:]
    return D




def getClassParent(text, class_name):
    #class\s+(?:[\w\s()"_])*{class_name}\s*(?:\:\s*(?:public)?\s+(\w+))?\s*\{{[\w\S\\n\s]*
    regex = 'class\s+(?:[\w\s()"_])*{cls}\s*(?:\:\s*(?:public)?\s+([\w< >]+))?\s*{brace}'.format(cls=class_name,brace='{')
    result = re.search(regex,text)
    if(result):
        parent = result.group(1)
        if(parent and "vtkAOSDataArrayTemplate" in parent):
            return "vtkDataArray"
        return result.group(1)
    else:
        return None

def findFileForClass(rootPath, className):
    headerFile= None
    paths = rootPath
    if(not type(rootPath) is list):
        paths = [rootPath]
    for p in paths:

        for root, dirs, files in os.walk(p):
            for file in files:
                if file.endswith(className+".h"):
                     headerFile = (os.path.join(root, file))
    return headerFile

def getSignatures(text):
    regex = r'[ \t]*\s*((?:\w+\s+)*\w+(?:(?:\s+[\*\&]*)|(?:[\*\&]*\s+))\w+\s*\([\w\&\*\,\s\n\r\[\]\=(?:\(\w*\))]*\))'
    result = re.findall(regex,text, flags=re.MULTILINE)
    return result

def parseSignature(text):
    regex = r'^\s*((?:(?:virtual|static)\s)*)((?:[\w]+[\s\*\&]+)+)(\w+)\s*\(([\w\&\*\,\s\n\r\[\]\=(?:\(\w*\))]*)\)'
    result = re.search(regex, text)
    if not result:
        print("!! Could not parse signature [" + text + "]")
        return None
    else:
        return {'complete':result.group(0).strip(),'keywords':result.group(1).strip(), 'returnType':result.group(2).strip(), 'name':result.group(3), 'args':result.group(4).strip()}

def parseKeywords(keywords):
    isVirtual = False
    isStatic = False

    if "virtual" in keywords:
        isVirtual = True

    if "static" in keywords:
        isStatic = True

    return {"virtual":isVirtual, "static":isStatic}

def parseReturnType(returnType):
    regex = r'((?:(?:const|long|unsigned) )*)([\w ]+)([\s\*\&]*)'
    result = re.match(regex,returnType)
    return {
        "const":"const" in result.group(1),
        "unsigned":"unsigned" in result.group(1),
        "type":result.group(2).strip(), 
        "referenceType":result.group(3).replace(" ", "")}

def parseArguments(argumentString):
    untitledArguments = 0
    arguments = argumentString.split(",")
    argumentData = []
    for a in arguments:
        a = a.strip()
        if a:
            argument = parseArgument(a)

            if(not argument):
                continue
            if argument["type"] == "T":
                print("!! Chose not to handle type T in: [" + argumentString + "]")
                return None

            if argument["name"] == '':
                argument["name"] = "ARG_" + str(untitledArguments)
                untitledArguments+=1

            argumentData.append(argument)
    return argumentData

def parseArgument(argument):
    regex = r'((?:(?:const|unsigned) )*)((?:long long\s*)|[\w]+)((?:const|[\s\*\&])+)?(?:(\w+)?(?:\s*\[\s*(\w*)\s*\])?(?:(?:\s*=\s*(\w+)))?)?$'
    result = re.search(regex, argument)
    argumentData = {}

    if(not result):
        pass
    else:
        argumentData["type"]=result.group(2).strip()
        argumentData["name"] =result.group(4).strip() if result.group(4) else ""
        argumentData["unsigned"]="unsigned" in result.group(1)
        argumentData["const"]="const" in result.group(1)
        argumentData["referenceType"]=result.group(3).replace(" ", "").strip() if result.group(3) else ""
        argumentData["arraySize"]=result.group(5)
        argumentData["init"]=result.group(6)

    if not "type" in argumentData : 
        return None
    if(argumentData["type"]=="void" and argumentData["referenceType"]==''):
        return None
    return argumentData

def parseFunction(functionText):
    function = {}
    signatureParts = parseSignature(functionText)
    function["name"] = signatureParts["name"]
    function["complete"] = signatureParts["complete"]
        
    function.update(parseKeywords(signatureParts["keywords"]))
    function.update(parseReturnType(signatureParts["returnType"]))
    if "return" in function["type"]:
        print("!! Found suspicious \"return\" in function [" + functionText + "]" )
        return None
    function.update({"args":parseArguments(signatureParts["args"])})
    if function["args"] == None:
        print("!! Failed to parse args in [" + functionText + "]")
        return None 
    if(function["type"] == "void" and function["referenceType"] == ''):
        function["void"] = True
    else:
        function["void"] = False
    return function

def parseSignatures(className,signatures, badApples, nameCount):
    nameCount = {}

    functions = []
    for m in signatures:
        clean = ' '.join(m.split()).strip()
        if(not isRotten(clean, badApples)):
            function = parseFunction(clean)
            if not function:
                continue
            if(function["name"] not in nameCount):
                nameCount[function["name"]] = 0
            else:
                nameCount[function["name"]] += 1

            function["id"] = nameCount[function["name"]]
            function["className"]=className
            functions.append(function)

    return functions

def isRotten(string, badApples):
    for b in badApples:
        if b in str(string):
            return True
    return False

def removeBasedOnDetector(functions, detector):
    functions = [x for x in functions if not detector(x)]

#=====================================
def printOriginalSignature(function,):
    return function["complete"]

def printCppSignature(function):
    stream = cStringIO.StringIO()
    stream.write('{static}{virtual}{returnType}{referenceType} {name}('.format(
        static="static " if function["static"] else "",
        virtual="virtual " if function["virtual"] else "",
        returnType=function["type"],
        referenceType=function["referenceType"],
        name=function["name"]))
    for a in range(len(function["args"])):
        arg = function["args"][a]
        stream.write('{const}{unsigned}{type}{referenceType} {name}{brackets}{init}'.format(
            const="const " if arg["const"] else "",
            unsigned="unsigned " if arg["unsigned"] else "",
            type=arg["type"],
            referenceType=" " + arg["referenceType"] if arg["referenceType"] != "" else "",
            name=arg["name"],
            brackets="["+arg["arraySize"]+"]" if arg["arraySize"] else "",
            init=" = "+arg["init"] if arg["init"] else ""))
        if a < len(function["args"])-1:
            stream.write(", ")
    stream.write(')')
    return stream.getvalue()


C_typeReplacements = {}
C_typeReplacements["Link"] = "vtkCellLinks::Link"

def printCFunctionName(function):
    stream = cStringIO.StringIO()
    stream.write('{className}_{name}_{nameid}'.format(
    className=function["className"],
    name=function["name"],
    nameid=function["id"]))
    return stream.getvalue()

def printAPIFunctionName(function):
    stream = cStringIO.StringIO()
    stream.write('{name}_{nameid}'.format(
    name=function["name"],
    nameid=function["id"]))
    return stream.getvalue()

def printCSignature(function):
    stream = cStringIO.StringIO()
    stream.write("bool " + printCFunctionName(function) + "(")
    args = []
    if not function["void"]:
        args.append({
            "name":"return_value",
            "const":function["const"] if "&" not in function["referenceType"] else False,
            "unsigned":function["unsigned"],
            "type":function["type"],
            "referenceType":"*" + function["referenceType"] if "&" not in function["referenceType"] else function["referenceType"].replace("&","*"),
            "arraySize":None,
            "init":None})

    if not function["static"] :
        args.append({
            "name":"callingObject",
            "const":False,
            "unsigned":False,
            "type":function["className"],
            "referenceType":"*",
            "arraySize":None,
            "init":None})

    args = args + function["args"]
    for a in range(len(args)):

        arg = args[a]
        for r in C_typeReplacements:
            if arg["type"] == r:
                arg["type"] = C_typeReplacements[r]

        stream.write('{const}{unsigned}{type}{referenceType} {name}{brackets}{init}'.format(
            const="const " if arg["const"] else "",
            unsigned="unsigned " if arg["unsigned"] else "",
            type=arg["type"],
            referenceType=" " + arg["referenceType"].replace("&", "*") if arg["referenceType"] != "" else "",
            name=arg["name"],
            brackets="["+arg["arraySize"]+"]" if arg["arraySize"] else "",
            init=" = "+arg["init"] if arg["init"] else ""))
        if a < len(args)-1:
            stream.write(", ")
    stream.write(')')
    return stream.getvalue()

def printCppCall(function):
    stream = cStringIO.StringIO()

    if function["static"]:
        stream.write("{}::".format(function["className"]))
    else:
        stream.write("{}->".format("callingObject"))

    stream.write('{name}('.format(
        name=function["name"]))
    args = []
    


    args = args + function["args"]
    for a in range(len(args)):
        arg = args[a]
        stream.write('{dereference}{name}'.format(
            name=arg["name"],
            dereference="*"if "&" in arg["referenceType"] else ""
            ))
        if a < len(args)-1:
            stream.write(", ")
    stream.write(')')
    return stream.getvalue()


def printAPIFunctionCode(function) :
    stream = cStringIO.StringIO()
    stream.write("// " + printCppSignature(function) + "\n")
    stream.write("// " + printOriginalSignature(function) + "\n")

    stream.write("TESTDLLSORT_API " + printCSignature(function))
    stream.write(" {\n")
    stream.write('#ifdef DEBUG\n')

    stream.write(
"""\tfreopen("debug.txt", "a", stdout);
\tfreopen("debug.txt", "a", stderr);
""")
    stream.write('#endif\n')

    stream.write('#ifdef DEBUG\n')
    stream.write('\tstd::cout << "[{}::{}]:[";\n'.format(function["className"],function["name"]))
    stream.write('#endif\n')
    stream.write("{}bool success = true;\n".format("\t"))
    if not function["static"]:
        stream.write('#ifdef DEBUG\n')
        stream.write('\tstd::cout << " (callingObject:" << callingObject << ")";\n')
        stream.write('#endif\n')

        stream.write('{}if (callingObject == NULL) return false;\n'.format("\t"))

    if not function["void"]:
        stream.write('#ifdef DEBUG\n')
        stream.write('\tstd::cout << " (returnPtr:" << return_value <<  ")";\n')
        stream.write('#endif\n')

        stream.write('{}{} = '.format("\t","*return_value"))

    else:
        stream.write('{}'.format("\t","*return_value"))

    stream.write('{};\n'.format(printCppCall(function)))

    stream.write('#ifdef DEBUG\n')

    if not function["void"]:
        stream.write('\tif(return_value) std::cout << " (return_value:" << *return_value <<  ")";\n')

    stream.write('\tstd::cout << "]"<< std::endl;\n'.format(printCppCall(function)))
    stream.write('#endif\n')


    stream.write('{}return success;\n'.format("\t"))

    stream.write("}\n")

    return stream.getvalue()

def printAPICode(functions, className):
    stream = cStringIO.StringIO()
    stream.write(
        """
#ifdef _WIN32
#define TESTDLLSORT_API __declspec(dllexport) 
#else 
#define TESTDLLSORT_API  
#endif

""")

    stream.write('#include <{}.h>\n'.format(className))
    stream.write('#include <{}.h>\n'.format("vtkUnicodeStringArray"))
    stream.write("\n")
    stream.write('extern "C" {\n')

    for f in functions:
        stream.write(printAPIFunctionCode(f))
        stream.write("\n")

    stream.write("}\n")
    return stream.getvalue()


def convertDLLImportType(arg):

    if(arg["type"]=="const char"):
        return "string"
    if(arg["type"]=="char" and arg["referenceType"]!=""):
        return "string"
    if(arg["referenceType"]!=""):
        return "IntPtr"
    if(arg["type"]=="size_t"):
        return "ulong"
    if(arg["type"]=="vtkIdType"):
        return "long"
    if(arg["type"]=="vtkTypeBool"):
        return "bool"
    if(arg["type"]=="vtkTypeUInt64"):
        return "ulong"
    if(arg["type"]=="vtkTypeInt64"):
        return "long"     
    if(arg["type"]=="vtkMTimeType"):
        return "ulong"
    if(arg["type"]=="vtkStdString"):
        return "string"
    if(arg["unsigned"] and arg["type"] == "int"):
        return "uint"
    if(arg["unsigned"] and arg["type"] == "long long"):
        return "ulong"  
    if(arg["unsigned"] and arg["type"] == "long"):
        return "ulong"      
    if(arg["type"] == "long long"):
        return "long"

    return arg["type"]
    

def convertDLLImportArgName(arg):
    if(arg["name"] == "event"):
        return "evt"
    if(arg["name"] == "in"):
        return "in_var"
    if(arg["name"] == "out"):
        return "out_var"
    if(arg["name"] == "object"):
        return "obj"

    return arg["name"]

def printDLLImportFunctionCode(function) :
    stream = cStringIO.StringIO()
    stream.write("// " + printCppSignature(function) + "\n")
    stream.write("// " + printOriginalSignature(function) + "\n")

    stream.write('[DllImport("vtkplugin", EntryPoint="{}")] public static extern '.format(printCFunctionName(function)))
    stream.write("\n")
    stream.write("bool {name}(".format(tab='\t',name=printAPIFunctionName(function)))
    args = []

    if not function["void"]:
        args.append({
            "name":"return_value",
            "const":function["const"] if "&" not in function["referenceType"] else False,
            "unsigned":function["unsigned"],
            "type":"IntPtr",#function["type"],
            "referenceType":"*" + function["referenceType"] if "&" not in function["referenceType"] else function["referenceType"].replace("&","*"),
            "arraySize":None,
            "init":None})

    if not function["static"] :
        args.append({
            "name":"callingObject",
            "const":False,
            "unsigned":False,
            "type":function["className"],
            "referenceType":"*",
            "arraySize":None,
            "init":None})

    args = args + function["args"]
    for a in range(len(args)):

        arg = args[a]

        stream.write('{cSharpType} /*({unsigned}{type}{referenceType}{brackets})*/ {cSharpBrackets}{name}'.format(
            cSharpType=convertDLLImportType(arg),
            const="const " if arg["const"] else "",
            unsigned="unsigned " if arg["unsigned"] else "",
            type=arg["type"],
            referenceType=arg["referenceType"],
            name=convertDLLImportArgName(arg),
            brackets="["+arg["arraySize"]+"]" if arg["arraySize"] else "",
            cSharpBrackets="[""]" if arg["arraySize"] else "",
            init=" = "+arg["init"] if arg["init"] else ""))

        if a < len(args)-1:
            stream.write(", ")


    stream.write(");\n")
    

    return stream.getvalue()


def printDLLImportCode(functions, className):
    stream = cStringIO.StringIO()
    stream.write(
        """
using System;
using System.Runtime.InteropServices;
using System.Text;
using System.Linq;

namespace VTK_API {
""")

    stream.write("class API_" + className + " {\n")

    stream.write("\n")

    for f in functions:
        stream.write(printDLLImportFunctionCode(f))
        stream.write("\n")

    stream.write("}\n};\n")
    return stream.getvalue()




def convertInterfaceType(arg):

    returnType = arg["type"]
    if(arg["type"]=="const char"):
        return "string"
    if(arg["type"]=="char" and arg["referenceType"]!=""):
        return "string"
    if(arg["type"]=="size_t"):
        returnType = "ulong"
    if(arg["type"]=="vtkIdType"):
        returnType = "long"
    if(arg["type"]=="vtkTypeBool"):
        returnType = "bool"
    if(arg["type"]=="vtkTypeUInt64"):
        returnType = "ulong"
    if(arg["type"]=="vtkTypeInt64"):
        returnType = "long"     
    if(arg["type"]=="vtkMTimeType"):
        returnType = "ulong"
    if(arg["type"]=="vtkStdString"):
        returnType = "string"
    if(arg["unsigned"] and arg["type"] == "int"):
        returnType = "uint"
    if(arg["unsigned"] and arg["type"] == "long long"):
        returnType = "ulong"    
    if(arg["unsigned"] and arg["type"] == "long"):
        returnType = "ulong"    
    if(arg["type"] == "long long"):
        returnType = "long"

    # if arg["referenceType"]!="" and "vtk" not in returnType:
    #     returnType = "IntPtr"

    if arg["referenceType"]!="" and "vtk" not in returnType:
        returnType# += "[]"

    if arg["referenceType"]!="" and "vtk" not in returnType:
        returnType = "IntPtr" # += "[]"

    if "arraySize" in arg and arg["arraySize"] :
        returnType = returnType

    # if "arraySize" in arg and arg["arraySize"] :
    #     returnType = returnType+"[]"

    if(arg["referenceType"]!="" and "vtk" in returnType):
        returnType = arg["type"]
    

    if returnType == "void" and arg["referenceType"]!="" :
        returnType = "IntPtr"
    return returnType


def printInterfaceFunctionSignature(function):
    stream = cStringIO.StringIO()
    functionName = function["complete"]

    hide = False
    try: 
        # print(function["className"] +", " + function["complete"])
        hide = CONFIG["OPTIONS"][function["className"]][function["complete"]]["hide"]
        # print(hide)
    except:
        pass

    if not hide:
        stream.write("public")
    else:
        stream.write("protected")

    if function["static"]:
        stream.write(" static")

    returnType = convertInterfaceType(function)

    stream.write(" {}".format(returnType))
    stream.write(" {}".format(function["name"]))
    if hide:
        stream.write("_" + str(function["id"]))

    stream.write("(")

    args = function["args"]

    for a in range(len(args)):

        arg = args[a]
        cSharpType = convertInterfaceType(arg)
        stream.write('{cSharpType} /*({unsigned}{type}{referenceType}{brackets})*/ {cSharpBrackets}{name}'.format(
            cSharpType=cSharpType,
            const="const " if arg["const"] else "",
            unsigned="unsigned " if arg["unsigned"] else "",
            type=arg["type"],
            referenceType=arg["referenceType"],
            name=convertDLLImportArgName(arg),
            brackets="["+arg["arraySize"]+"]" if arg["arraySize"] else "",
            cSharpBrackets="[]" if (
                arg["arraySize"]  or (arg["referenceType"] != "" and "vtk" not in cSharpType)) and cSharpType!= "IntPtr" and not "&" in arg["referenceType"] and cSharpType != "string" else "",
            init=" = "+arg["init"] if arg["init"] else ""))

        if a < len(args)-1:
            stream.write(", ")


    stream.write(")")
    return stream.getvalue()


def printInterfaceFunctionSignatureID(function):
    stream = cStringIO.StringIO()
    functionName = function["complete"]

    hide = False
    try: 
        hide = CONFIG["OPTIONS"][className][functionName]["hide"]
    except:
        pass

    if not hide:
        stream.write("public")
    else:
        stream.write("protected")

    if function["static"]:
        stream.write(" static")

    returnType = convertInterfaceType(function)

    stream.write(" {}".format(returnType))
    stream.write(" {}".format(function["name"]))

    if hide:
        stream.write("_" + function["id"])



    stream.write("(")

    args = function["args"]

    for a in range(len(args)):

        arg = args[a]
        cSharpType = convertInterfaceType(arg)
        stream.write('{cSharpType} {cSharpBrackets}'.format(
            cSharpType=cSharpType,
            const="const " if arg["const"] else "",
            unsigned="unsigned " if arg["unsigned"] else "",
            type=arg["type"],
            referenceType=arg["referenceType"],
            name=convertDLLImportArgName(arg),
            brackets="["+arg["arraySize"]+"]" if arg["arraySize"] else "",
            cSharpBrackets="[]" if (
                arg["arraySize"]  or (arg["referenceType"] != "" and "vtk" not in cSharpType)) and not "&" in arg["referenceType"] and cSharpType != "string" else "",
            init=" = "+arg["init"] if arg["init"] else ""))

        if a < len(args)-1:
            stream.write(", ")


    stream.write(")")
    return stream.getvalue()


def printInterfaceCall(function):
    stream = cStringIO.StringIO()


    if function["static"]:
        pass#stream.write("{}.".format(function["className"]))
    else:
        pass#stream.write("{}.".format("calling_object"))

    stream.write('VTK_API.API_{className}.{functionName}('.format(
        className=function["className"],
        functionName=printAPIFunctionName(function)
        ))

    args = []
    



    if not function["void"]: 
        arg = {}
        arg["name"] = "returnPointer" + (".GetPtr()" if True else "")
        arg["type"] = "IntPtr"
        arg["referenceType"] = ""
        args.append(arg)


    if not function["static"]: 
        arg = {}
        arg["name"] = "this"
        arg["type"] = "IntPtr"
        arg["referenceType"] = ""
        args.append(arg)


    args = args + function["args"]
    for a in range(len(args)):
        arg = args[a]
        stream.write('{name}'.format(
            name=convertDLLImportArgName(arg),
            dereference="*"if "&" in arg["referenceType"] else ""
            ))
        if a < len(args)-1:
            stream.write(", ")
    stream.write(')')
    return stream.getvalue()



def defaultnum(function) :

    className = function["className"]
    functionName = function["complete"]
    numElements = 1
    try: 
        numElements = CONFIG["OPTIONS"][className][functionName]["returnElements"]
        #print(numElements)
    except:
        pass

    return numElements

def printInterfaceFunctionCode(function) :
    stream = cStringIO.StringIO()
    stream.write("// " + printCppSignature(function) + "\n")
    stream.write("// " + '"' + printOriginalSignature(function) + '"' + "\n") 

    stream.write(printInterfaceFunctionSignature(function))


    stream.write(" {\n")

    returnType = convertInterfaceType(function)

    if(returnType !="void" ):

        #stream.write("{tab}int return_elements = {returnElements};\n".format(tab="\t",returnType=returnType, returnElements=defaultnum(function)))

        stream.write("{tab}ReturnPointer returnPointer = new ReturnPointer(new {returnType}());\n".format(
            tab="\t",
            returnType=returnType if "vtk" not in returnType and "string" not in returnType else "IntPtr", 
            returnElements=defaultnum(function)
        ))


    # if(not function["static"]):
    #     stream.write("{tab}IntPtr calling_object = this.GetPtr();\n".format(tab="\t"))

    if(returnType !="void" ):
        # stream.write("{tab}{returnType}{brackets} return_value{assignment};\n".format(
        #     tab="\t",
        #     returnType=returnType, 
        #     brackets="[]" if function["referenceType"]!="" and "vtk" not in returnType else "",
        #     assignment=" = new " + returnType + "()" if "vtk" in returnType else ""
        # ))
        pass


    stream.write("\t" + printInterfaceCall(function))
    stream.write(";\n")

    if(returnType !="void" and "vtk" not in returnType):
        stream.write("{tab}return ({returnType})returnPointer;\n".format(tab="\t", returnType=returnType))
    elif(returnType !="void"):
        stream.write("{tab}return ({returnType})(IntPtr)returnPointer;\n".format(tab="\t", returnType=returnType))

    stream.write("}")
    stream.write("\n")

    stream.write("\n")

    return stream.getvalue()


def printInterfaceCode(functions, className, parent):
    stream = cStringIO.StringIO()
    stream.write(
        """

using System;
using UnityEngine;
using System.Runtime.InteropServices;

namespace VTK {
""")

    stream.write("public partial class " + className)
    if(parent):
        stream.write(" : " + parent)
    stream.write(" {\n")

    if parent:
        stream.write("\t\t" + "public " + className + "(IntPtr p) : base(p) {}\n")
    stream.write("\t\t" + "public static implicit operator  {className}(IntPtr p) {{return new {className}(p);}}\n".format(className=className))
    stream.write("\t\t" + "public static implicit operator  IntPtr({className} o) {{return o.GetPtr();}}\n".format(className=className))

    stream.write("\n")

    sigs = {}
    for f in functions:

        sig = printInterfaceFunctionSignatureID(f)
        # print("..")
        # print(printInterfaceFunctionSignatureID(f))
        # print(sig)
        if(sig in sigs):
            continue
        sigs[sig] = ""

        stream.write(printInterfaceFunctionCode(f))
        stream.write("\n")

    stream.write("}\n};\n")
    return stream.getvalue()



#=====================================
def detectReferences(f):
    for a in f["args"]:
        if "&" in a["referenceType"]:
            return True
    if "&" in f["referenceType"]:
        return True
    return False

def getInheritenceDependencies(className, VTKpath, classesSet):
    if("vtkStdString" != className):
        classesSet.add(className)
    headerFile = findFileForClass(VTKpath,className)
    if( not headerFile):
        return
    with open(headerFile, 'r') as myfile:
        data = myfile.read()
    parent = getClassParent(data,className)
    if(parent and parent not in classesSet):
        getInheritenceDependencies(parent,VTKpath,classesSet)

def getComponentDependeicies(functions, VTKpath, classesSet):
    for f in functions:
        if("vtk" in f["type"] and "*" in f["referenceType"]):
            getInheritenceDependencies(f["type"],VTKpath,classesSet)
        for a in f["args"]:
            if("vtk" in a["type"] and "*" in a["referenceType"]):
                getInheritenceDependencies(a["type"],VTKpath,classesSet) 



def parseSourceForClass(className, VTKpath, writeParent):
    badApples = []
    badApples.append("vtkNotUsed")
    badApples.append("ostream")
    badApples.append("inline")
    badApples.append("VTK_SIZEHINT") 
    badApples.append("__VTK_WRAP__")
    badApples.append("::")
    badApples.append("ALLCOPY")
    badApples.append("VTK_NEWINSTANCE")
    badApples.append("vtkEventDeclarationMacro")
    badApples.append("operator")
    badApples.append("vtkVariant")
    #badApples.append("vtkInformation")
    badApples.append("vtkExecutive")
    #badApples.append("vtkAlgorithmOutput")
    #badApples.append("vtkStdString")
    badApples.append("vtkCollectionSimpleIterator")
    badApples.append("GetLink")
    badApples.append("InternalTransformDerivative")
    badApples.append("DebugOption")
    badApples.append("PixelInformation")
    #badApples.append("VTKCOMMONCORE_EXPORT")
    badApples.append("PassTypes")
    badApples.append("__attribute__")
    badApples.append("ElapsedTimeSeconds")
    badApples.append("ElapsedTimeMilliseconds")
    badApples.append("ElapsedTimeNanoseconds")
    badApples.append("vtkRecti")
    badApples.append("vtkShaderProgram2")
    badApples.append("vtkTimeStamp")
    badApples.append("vtkRenderState")
    replacements = {}
    replacements["VTKCOMMONCORE_EXPORT"] = ""
    replacements["VTKCOMMONEXECUTIONMODEL_EXPORT"] = ""
    replacements["VTK_WRAP_EXTERN"] = ""
    replacements["GetClassNameA"] = "GetClassName"
    replacements["GetClassNameW"] = "GetClassName"


    fullText = getFileTextForClassname(VTKpath, className, True)
    if(fullText == None):
        print("no Full Text")
        return None

    trimmed = trimPreprocessedFile(fullText,className)
    # print(trimmed)
    if(trimmed == None):
        return None
    #data = comment_remover(trimmed)
    data = trimmed
    parent = getClassParent(data,className)
    writeParent["parent"] = parent
    publicData =  find_between(data,"public:", "protected:")
    print 
    for r in replacements:
        publicData = publicData.replace(r,replacements[r])  
    
    functions = parseSignatures(className, getSignatures(publicData), badApples,{})
    return functions

def generateCodeForClass(functions, className, parent, APIPath, interfacePath):
	# 	VTKpath = findVTKHeaders(sys.argv[1])
	# APIPath = sys.argv[2]
	# interfacePath = sys.argv[3]

    API_OUTPUT = open(APIPath + "/" + "API_"+className +".cpp",'w')
    API_OUTPUT.write(printAPICode(functions, className))
    DLLIMPORT_OUTPUT = open(interfacePath+ "/" + "API/API_"+className +".cs",'w')
    DLLIMPORT_OUTPUT.write(printDLLImportCode(functions, className))
    INTERFACE_OUTPUT = open(interfacePath+ "/" +className +".cs",'w')
    INTERFACE_OUTPUT.write(printInterfaceCode(functions, className,parent))

    DLLIMPORT_OUTPUT = open(interfacePath+ "/" + "API/API_"+className +".cs",'w')
    DLLIMPORT_OUTPUT.write(printDLLImportCode(functions, className))
    INTERFACE_OUTPUT = open(interfacePath+ "/" + className +".cs",'w')
    INTERFACE_OUTPUT.write(printInterfaceCode(functions, className,parent))


def handleClassNames(classNames,VTKpath, shouldRecurse, APIPath,interfacePath,config, compiler):
    CONFIG["OPTIONS"] = config
    CONFIG["COMPILER"] = compiler
    requiredClasses = Set()
    for n in classNames:
        requiredClasses.add(n)

    handledClasses = Set()
    rejectedClasses = Set()

    rejectedClasses.add("vtkRenderState")
    if shouldRecurse:
        for className in classNames:
            getInheritenceDependencies(className,VTKpath, requiredClasses)

    remaining = None
    print (requiredClasses)
    while(len(requiredClasses.difference(handledClasses)) > 0):
        remaining = requiredClasses.difference(handledClasses)
        className = next(iter(remaining))
        parent = {"parent":None}
        functions = parseSourceForClass(className, VTKpath,parent)

        if functions != None:
            print ("++ handling " + className + " with " + str(len(functions)) + " found")
            

            if shouldRecurse:
                getComponentDependeicies(functions,VTKpath,requiredClasses)
            generateCodeForClass(functions, className,parent["parent"], APIPath,interfacePath)
        else:
            print ("-- rejected " + className )

            rejectedClasses.add(className)
        handledClasses.add(className)

    print("**handled: ")
    for s in handledClasses.difference(rejectedClasses):
        print s

    print("**rejected: ")
    for s in rejectedClasses:
        print s

#=====================================
def trimPreprocessedFile1(text, class_name):
    regex = 'class\s+(?:[\w\s()"_])*{class_name}\s*(?:\:\s*(?:public)?\s+([\w< >]+))?\s*\{{[\w\S\\n\s]*'.format(class_name=class_name)
    result = re.search(regex,text)
    if(not result):
        print text
        print regex
        return None

    return result.group(0)

def trimPreprocessedFile(text, class_name):
    regex = 'class\s+(?:[\w\s()"_])*{class_name}\s*(?:\:\s*(?:public)?\s+([\w< >]+))?\s*\{{[\w\S\\n\s]*'.format(class_name=class_name)
    result = re.search(regex,text)
    if(not result):
        print text
        print regex
        return None

    result = result.group(0)

    regex2 = '([\w\S\\n\s]*)(?:class|struct)\s+(?:[\w\s()"_])*\w+\s*(?:\:\s*(?:public)?\s+([\w< >]+))?\s*\{'  
    result2 = re.search(regex2,result)
    while result2.group(1):
        result = result2.group(1)
        result2 = re.search(regex2,result)
    #print("####clipped! (" + str(len(result2.group(1))) + ", " + str(len(result.group(0))) + ")"+ "\n"+"----\n" + result.group(0) + "=====\n") if result2.group(1) else result.group(0)
    #return result2.group(1) if result2.group(1) else result.group(0)
    return result
def getFileTextForClassname(VTKPath, class_name, preprocess=False):
    headerFile = findFileForClass(VTKPath,class_name)
    if not headerFile: 
        print("!! Could not find headerFile for [" + class_name + "]")
        return None
    if(preprocess):
        FNULL = open(os.devnull, 'w')
        print([CONFIG["COMPILER"], '-E', '{}'.format(headerFile)])
        return subprocess.check_output([CONFIG["COMPILER"], '-E', '{}'.format(headerFile)], stderr=FNULL)
    else:
        with open(headerFile, 'r') as myfile:
            data = myfile.read()
        return data
