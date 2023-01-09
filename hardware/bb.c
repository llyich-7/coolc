#include<stdio.h>
#include<wiringPi.h>

#define LED 1 
#define LEVEL 1024
#define PERIOD 10	//mS
#define TH 5000
#define TC 10
int main(){

	wiringPiSetup();
	pinMode(LED, PWM_OUTPUT);

	int step = 0;
	int cycle = 0;
	int weight = 0;
	unsigned long time_10_ms = 0;

	









	while(1){
		delay(PERIOD);
		time_10_ms = time_10_ms + PERIOD;

		if(time_10_ms < TH){
			if(time_10_ms % TC == 0){
				weight = weight+1;
			}
		}else if(time_10_ms < TH+500){
			weight = 1023;
			
		}else if(time_10_ms < TH*2 + 500){
			if(time_10_ms % TC == 0){
				weight = weight-2;
			}
		}else if(time_10_ms < TH*2 + 500 + 500){
			weight = 0;
			
		}else{
			time_10_ms = 0;
		}

		if(weight < 0){
			weight = 0;
		}
		if(weight > 1023){
			weight = 1023;
		}

		pwmWrite(LED, weight);

	}

return 0;
}
