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
* [x] Interaction with frankenstein's nextcloud sensorlogger.

# Nextcloud sensorlogger HOWTO

This firmware allows you to post data to your [nextcloud sensorlogger](https://github.com/alexstocker/sensorlogger/)

To use nextcloud sensorlogger firmware, you have to:
- Flash your esp8266 with recent [frankenstein](https://github.com/nekromant/esp8266-frankenstein) firware that supports new 'senslog' commands. 
- Flash the STC MCU with nextcloud-sensor-logger.ihx
- Before connecting STC & ESP8266 via jumpers, connect uart to esp8266 and configure the relevant environment variables. This can be done by running the following commands in the frankentein commandline: 

```
    setenv slog-deviceId YourDeviceId
    setenv slog-deviceName 'BlackBoard T5'
    setenv slog-deviceGroup 'sensors'
    setenv slog-deviceParentGroup 'home'
    setenv slog-nextCloudUrl 'https://cloud.example.com'
    setenv slog-userName 'Mr. Bean'
    setenv slog-password 'aintgonnatell'
    saveenv
```
- Connect the jumpers, and put your board somewhere ;)

STC will power esp8266 on every 15 minutes by default, post the data and turn it off to minimize power consumption. You may want to adjust the timeout in nextcloud-sensor-logger.c. 


TODO
* [ ] 2nd UART to interface ESP chip
