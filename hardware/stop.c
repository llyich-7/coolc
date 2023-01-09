#include<stdio.h>
#include<wiringPi.h>

#define LED 1 
int main(){

	wiringPiSetup();
	pinMode(LED, INPUT);


return 0;
}
