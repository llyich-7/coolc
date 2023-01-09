#include<stdio.h>
#include<wiringPi.h>

#define LED 29
#define LEVEL 100
#define PERIOD 100	//uS
#define TH	20000ul
#define TC	200
int main(){

	wiringPiSetup();
	pinMode(LED, OUTPUT);
	int step = 0;
	int cycle = 0;
	int weight = 0;
	unsigned long time_100_us = 0;

	scanf("%d", &weight);

	while(1){
		delayMicroseconds(PERIOD);
		time_100_us++;

		if(step < LEVEL){
			step++;
		}else{
			step = 0;
		}
		
		/*
		if(time_100_us < TH){
			if(time_100_us % TC == 0){
				weight++;
			}
		}else if(time_100_us < TH*2){
			if(time_100_us % TC == 0){
				weight--;
			}
		}else{
			weight = 0;
			time_100_us = 0;
		}
		*/
		
		if(step < weight){
			digitalWrite(LED, HIGH);
		}else{
			digitalWrite(LED, LOW);
		}


	}

return 0;
}
