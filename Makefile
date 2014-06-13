tracker.so:tracker.o
	g++ -shared -lglut -lOpenNI2 -lNiTE2 -Wl,-soname,tracker.so -o tracker.so  tracker.o -L../../OpenNI-2.1.0-x64/Redist -L../../NiTE-2.0.0/Redist -L./

tracker.o: Tracker.cpp
	g++ -c -fPIC -I../../NiTE-2.0.0/Include -I../../OpenNI-2.1.0-x64/Include Tracker.cpp -o tracker.o  -lglut -lOpenNI2 -lNiTE2 -L../../OpenNI-2.1.0-x64/Redist -L../../NiTE-2.0.0/Redist -L./

