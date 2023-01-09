#include<stdio.h>
#define TRUE 1
#define FALSE 0

int main(){

	long long num;
	int remain;
	int digits[10] = {0};
	int i;

	printf("Enter a number:");
	scanf("%lld", &num);

	while(1){
		remain = num%10;
		num = num/10;
		
		digits[remain]++;		

		if(num == 0)
			break;		
	}
	
	printf("Digit:\t\t");
	for(i = 0; i < 10; i++){
		printf("%d  ", i);
	}
	putchar('\n');

	printf("Occurrences:\t");
	for(i = 0; i < 10; i++){
		printf("%d  ", digits[i]);
	}
	putchar('\n');

return 0;
}
