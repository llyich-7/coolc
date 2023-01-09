#include<stdio.h>
#define true 1
#define false 0
typedef int bool;

int main(){

	int n;
	int digit;
	bool position[10] = {false};

	printf("Enter your number: ");

	scanf("%ld", &n);

	while(n > 0){
		digit = n%10;
		if(position[digit])
			break;
		position[digit] = true;
		n = n/10;
	}

	if(n > 0)
		printf("Repeat!\n");
	else
		printf("No reapt!\n");


return 0;
}
