// gcc -o modbus-master modbus-master.c -l modbus
#include <stdio.h>
#include <modbus/modbus-rtu.h>
#include <errno.h>
#include <stdlib.h>
#include "protocol.h"


int main(int argc,char *argv[]){
//Create a new RTU context with proper serial parameters (in this example,
//device name /dev/ttyS0, baud rate 9600, no parity bit, 8 data bits, 1 stop bit)
struct timeval old_response_timeout;
struct timeval response_timeout;

/* Save original timeout */

modbus_t *ctx = modbus_new_rtu("/dev/ttyUSB1", 115200, 'N', 8, 1);
if (!ctx) {
    fprintf(stderr, "Failed to create the context: %s\n", modbus_strerror(errno));
    exit(1);
}
modbus_set_debug(ctx, 1);

modbus_get_response_timeout(ctx, &old_response_timeout);

/* Define a new and too short timeout! */
response_timeout.tv_sec = 2;
response_timeout.tv_usec = 0;
modbus_set_response_timeout(ctx, &response_timeout);

printf("Timeout: %d\n",response_timeout.tv_sec);
if (modbus_connect(ctx) == -1) {
    fprintf(stderr, "Unable to connect: %s\n", modbus_strerror(errno));
    modbus_free(ctx);
    exit(1);
}

//Set the Modbus address of the remote slave (to 3)
modbus_set_slave(ctx, 1);


uint16_t reg[TOTAL_REGS_SIZE];// will store read registers values

//Read 5 holding registers starting from address 10
int num = modbus_read_registers(ctx, 0, TOTAL_REGS_SIZE, reg);
if (num != TOTAL_REGS_SIZE) {// number of read registers is not the one expected
    fprintf(stderr, "Failed to read: %s\n", modbus_strerror(errno));
}
for (int i = 0; i < TOTAL_REGS_SIZE; i++)
  printf("%d: %d\n", i, reg[i]);
//  if (reg[WIFIPOWEROFF] == 0)
//    modbus_write_register(ctx,WIFIPOWEROFF,20);
// Test function 16
reg[LEDR] = reg[LEDG] = reg[LEDB] = 250;
modbus_write_registers(ctx,LEDR,3,&reg[LEDR]);

//modbus_write_register(ctx,LEDR,250);
//modbus_write_register(ctx,LEDG,250);
//modbus_write_register(ctx,LEDB,250);
//modbus_write_register(ctx, BEEPER, !reg[BEEPER]);
modbus_close(ctx);
modbus_free(ctx);

}

