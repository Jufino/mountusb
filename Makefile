C=$(CROSS_COMPILE)gcc -Wall -g
CPP=$(CROSS_COMPILE)g++ -Wall -g

GFLAGS=`pkg-config --libs --cflags gtk+-2.0 gmodule-2.0`

TARGET=mountusb

mountusb: mountusb.cpp
	$(CPP) mountusb.cpp -o mountusb

all: $(TARGET)
	@echo "All done"
