# blackboard-STC15

A firmware for STC15L2K32S microcontroller on Black Board T5 ESP-13

Use [SDCC](http://sdcc.sourceforge.net/) to compile

Use [STC MCU ISP flash tool](https://github.com/grigorig/stcgal) to programm

Install both sdcc and stcgal per instructions (or use distribution packages for sdcc)

Programming the MCU is via a USB to serial converter connected to connector 3P, the BetaBlack MCU programming pins on /dev/ttyUSB0
Modbus communications is via the alternative pins connected to the ESP8266 via jumpers. These jumpers can be removed and a second USB to Serial converter used for testing via /dev/ttyUSB1.

cd blackboard-STC15
make
make install # will download to the MCU

Build the modbus-master program for testing communication
make modbus-master




What it supports for now:
* [x] STC15 UART (baudrate: 115200)
* [x] Reading on-board DHT11 values
* [x] One-wire communications (DS18B20 temp sensor) via P1.5 (pin 4 of 5-pin header)
* [x] I2C communications via pins 2 and 3 (SDA/SCL) of 5-pin header (tested with BH1750 light sensor)
* [x] Using PWM to flash on-board RGB LEDs
* [x] On-board beeper
* [x] On-board relay
* [X] Second uart for communicating with the ESP8266
* [X] MCU Modbus client communication to read/write some of the peripherals based on https://github.com/angeloc/simplemodbusng
* [X] Linux modbus-master test program based on libmodbus for bypassing the ESP8266
* [X] Implement a timer to power off the ESP8266 by the STC15

TODO
* [X] Implement modbus master in ESP8266 for access to MCU peripherals
