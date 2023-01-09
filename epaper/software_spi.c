#include <wiringPi.h>
#include <stdio.h>
#include "software_spi.h"

#define SDI_1   digitalWrite(SDI, HIGH)
#define SDI_0   digitalWrite(SDI, LOW)
#define CS_1    digitalWrite(CS, HIGH)
#define CS_0    digitalWrite(CS, LOW)
#define ClK_1   digitalWrite(CLK, HIGH)
#define ClK_0   digitalWrite(CLK, LOW)

#define set_CS(n)   do{if(n != 0){digitalWrite(CS, HIGH);}else{digitalWrite(CS, LOW);}}while(0);
#define set_SDI(n)   do{if(n != 0){digitalWrite(SDI, HIGH);}else{digitalWrite(SDI, LOW);}}while(0);
#define set_CLK(n)   do{if(n != 0){digitalWrite(CLK, HIGH);}else{digitalWrite(CLK, LOW);}}while(0);

#define wait_uS(n)    delayMicroseconds(n)

#define bit(n)  (1u << (n))


STATUS software_spi_init(){
    pinMode(D_C, OUTPUT);
    pinMode(SDI, OUTPUT);
    pinMode(CS, OUTPUT);
    pinMode(CLK, OUTPUT);


    digitalWrite(D_C, LOW);
    digitalWrite(SDI, LOW);
    digitalWrite(CS, HIGH);
    digitalWrite(CLK, LOW);

    delay(1);

}

STATUS send_data(int hexs){
    send_a_byte(hexs, 1);
return OK;
}
STATUS send_command(int hexs){
    send_a_byte(hexs, 0);
return OK;
}

STATUS send_a_byte(int hexs, int d_or_c){
    int i;

    set_CS(0);
    set_CLK(0);

    if(d_or_c != 0){
        set_SDI(1);
    }else{
        set_SDI(0);
    }
    wait_uS(1);
    set_CLK(1);
    wait_uS(1);
    set_CLK(0);     //bit 1 done.

    for(i = 7; i >= 0; i--){
        if((hexs & bit(i)) != 0){
            set_SDI(1);
        }else{
            set_SDI(0);
        }
        wait_uS(1);
        set_CLK(1);
        wait_uS(1);
        set_CLK(0);
    }
    set_CS(1);
    wait_uS(1);

#ifdef PRT_ON
    printf("Sys: 0x%x has been send.\n", hexs);
#endif

return OK;
}


