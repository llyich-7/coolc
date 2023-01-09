#include<stdio.h>
#include<wiringPi.h>
#include<wiringSerial.h>
#include<stdlib.h>

int main(){
	
	int i;
	int ch;
	int fp;
	char str[6];
	char st[7] = { 0xaa, 0xfb, 0xff, 0xff, 'Y', 0x0a};
	wiringPiSetup();


	if((fp = serialOpen("/dev/ttyAMA0", 9600)) < 0){
		printf("unable to open Serial.\n");
		exit(1);
	}

	printf("Start!.\n");
	serialPrintf(fp, "nihao!\n");
	while(1){
		ch = serialGetchar(fp);
		
		for(i = 0; i < 6; i++){
			str[i] = '\0';
		}

		switch(ch){
			case 0xaa: 	str[0] = 0xaa;
						for(i = 1; i < 5; i++){
							str[i] = serialGetchar(fp);
						}
						break;
			default : break;
		}
		for(i = 0; str[i] != '\0'; i++){
			printf("%02x", str[i]);
		}

		if(str[0] != '\0'){
			putchar('\n');
		}

	}




return 0;
}
