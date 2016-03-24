# blackboard-STC15

A firmware for STC15L2K32S microcontroller on Black Board T5 ESP-13

Use [SDCC](http://sdcc.sourceforge.net/) to compile

Use [STC MCU ISP flash tool](https://github.com/grigorig/stcgal) to programm

Install both sdcc and stcgal per instructions (or use distribution packages for sdcc)

make
make install # will download to the MCU


What it supports for now:
* [x] STC15 UART (baudrate: 115200)
* [x] Reading on-board DHT11 values
* [x] One-wire communications (DS18B20 temp sensor) via P1.5 (pin 4 of 5-pin header)
* [x] I2C communications via pins 2 and 3 (SDA/SCL) of 5-pin header (tested with BH1750 light sensor)
* [x] Using PWM to flash on-board RGB LEDs
* [x] On-board beeper
* [x] On-board relay

TODO
* [ ] 2nd UART to interface ESP chip
