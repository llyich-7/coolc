#include <stdio.h>
#include <wiringPi.h>
#include <wiringSerial.h>
  
int main()
{
    int fd;
    if(wiringPiSetup()<0) {
        return 1;
    }

    //if((fd=serialOpen("/dev/ttyS0",115200))<0) { // gpio 使用mini串口
    if((fd=serialOpen("/dev/ttyAMA0",9600))<0) { // gpio 使用硬件串口
        return 1;
    }
 
    printf("serial test output ...\n");
    serialPrintf(fd,"1234567890abcdef");
 
    serialClose(fd);
    return 0;
}
