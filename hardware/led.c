#include<stdio.h>
#include<wiringPi.h>
int main(){

	wiringPiSetup();
	pinMode(29, OUTPUT);

	while(1){
	
		digitalWrite(29, LOW);
		delay(1600);
		digitalWrite(29, HIGH);
		delay(400);

		

	}

return 0;
}
