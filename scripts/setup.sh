mkdir -p build/
cd build/

if [ -z "$1" ]
then
	cmake ../ \
	-DCMAKE_INSTALL_PREFIX=../VertikalProject/Assets/Vertikal/Plugins
else
	cmake ../ \
	-DCMAKE_INSTALL_PREFIX=../VertikalProject/Assets/Vertikal/Plugins \
	-G "$1" 
fi
cmake --build . --target install