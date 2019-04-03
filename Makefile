
OBJS_COMMON = BH1750.rel delay.rel DHT11.rel DS18B20.rel i2c.rel PWM3.rel serial.rel timer0.rel

CC = sdcc
CFLAGS = -mmcs51 --model-medium
USB = 0

TARGETS=main nextcloud-sensorlogger esphome
all: $(addsuffix .ihx,$(TARGETS))
	
%.rel: %.c
	$(CC) $(CFLAGS) -c $<	

%.ihx: %.rel $(OBJS_COMMON)
	$(CC) $(CFLAGS) $^
		
		
clean:
	rm *.rel *.asm *.lst *.rst *.sym *.ihx *.map *.mem *.lk

install: install-main
	
install-%: %.ihx
	stcgal -p /dev/ttyUSB$(USB) -b 115200 -P stc15 $<
