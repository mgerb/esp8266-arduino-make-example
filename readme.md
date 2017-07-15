# esp8266-arduino-make-example

- Install make
- [Install Arduino IDE](https://www.arduino.cc/en/Main/Software)
- [Install ESP8266 Arduino](https://github.com/esp8266/Arduino)
- [Install arduino-esp32](https://github.com/espressif/arduino-esp32)

- makefile provided from [makeEspArduino](https://github.com/plerup/makeEspArduino)

## Usage with VS Code
I prefer to use VS Code over the Arduino IDE

- Install the C/C++ extension as well as the Arduino extension
- Set the `arduino.path` in your settings
- Add include paths to `c_cpp_properties.json`

## Check out the commands in the makefile
- make build
- make flash
- make clean
- make all

#### See a list of all commands
`make -f ./makeEspArduino.mk help`
