
OBJS = main.rel BH1750.rel delay.rel DHT11.rel DS18B20.rel i2c.rel PWM3.rel serial.rel timer0.rel SimpleModbusSlave.rel

CC = sdcc-sdcc 
CFLAGS = -mmcs51 
LFLAGS = --stack-auto
USB = 0
GCC = gcc

all : main.ihx

main.rel: main.c
	$(CC) -c main.c

BH1750.rel: BH1750.c BH1750.h
	$(CC) $(CFLAGS) -c BH1750.c

delay.rel: delay.c delay.h
	$(CC) $(CFLAGS) -c delay.c

DHT11.rel:  DHT11.c DHT11.h
	$(CC) $(CFLAGS) -c DHT11.c

DS18B20.rel: DS18B20.c DS18B20.h
	$(CC) $(CFLAGS) -c DS18B20.c

i2c.rel: i2c.c i2c.h
	$(CC) $(CFLAGS) -c i2c.c

PWM3.rel: PWM3.c PWM3.h
	$(CC) $(CFLAGS) -c PWM3.c

serial.rel: serial.c serial.h
	$(CC) $(CFLAGS) -c serial.c

timer0.rel: timer0.c timer0.h
	$(CC) $(CFLAGS) -c timer0.c

SimpleModbusSlave.rel: SimpleModbusSlave.c SimpleModbusSlave.h
	$(CC) $(CFLAGS) -c SimpleModbusSlave.c


main.ihx: $(OBJS)
	$(CC)  $(CFLAGS) $(OBJS)
	
modbus-master:  modbus-master.c
	gcc -o modbus-master modbus-master.c -l modbus

clean:
	\rm *.rel *.asm *.lst *.rst *.sym *.ihx *.map *.mem *.lk *.o modbus-master

install:
	stcgal -p /dev/ttyUSB$(USB) -P stc15 main.ihx
	
