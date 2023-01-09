#include <wiringPi.h>
#include <stdio.h>
#include "software_spi.h"




int main(){
	
	wiringPiSetup();

	software_spi_init();
	send_a_byte(0xaa, 0);
	send_a_byte(0x55, 0);
	send_a_byte(0x12, 1);
	send_a_byte(0x24, 1);

	SendCommand(SET_RAM_X_ADDRESS_START_END_POSITION);

    SendData((x_start >> 3) & 0xFF);
    SendData((x_end >> 3) & 0xFF);
    SendCommand(SET_RAM_Y_ADDRESS_START_END_POSITION);
    SendData(y_start & 0xFF);
    SendData((y_start >> 8) & 0xFF);
    SendData(y_end & 0xFF);
    SendData((y_end >> 8) & 0xFF);


	send_command(DISPLAY_UPDATE_CONTROL_2);
	send_data(0xC4);
	send_command(MASTER_ACTIVATION);
	send_command(TERMINATE_FRAME_READ_WRITE);
	delay(20);
	
	
	printf("Total using :%dms.\n", millis());

return 0;
}
