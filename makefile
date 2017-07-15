espmake = make -f ./makeEspArduino.mk

build:
	$(espmake) BUILD_DIR=./build

flash:
	$(espmake) flash BOARD=nodemcu

clean:
	rm -rf ./build

all: clean build
