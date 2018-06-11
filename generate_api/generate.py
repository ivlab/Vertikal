import sys
import re
import sys
import glob, os
from sets import Set
import cStringIO
import json
from pprint import pprint
import subprocess
from api_generation import * 

if(len(sys.argv) <= 1):
	print("USAGE: generate.py <path-to-VTK-headers> <path-for-generated-C-code> <path-for-generated-C#-code>")
	exit()

print(sys.argv)
VTKpath = findVTKHeaders(sys.argv[1])
APIPath = sys.argv[2]
interfacePath = sys.argv[3]





print("APIPath: " + APIPath)
print("interfacePath: " + interfacePath)


print("VTK:" + str(VTKpath))



#classNames = ['vtkPoints']
COMPILER = sys.argv[4]
CONFIG = json.load(open(os.path.dirname(os.path.realpath(__file__)) + "/" + "api_options.txt"))

classNames = [line.rstrip('\n') for line in open(os.path.dirname(os.path.realpath(__file__)) + "/" + "requested_classes.txt")]


handleClassNames(classNames, VTKpath, True, APIPath,interfacePath,CONFIG, COMPILER)






