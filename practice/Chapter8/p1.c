#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define DONE 2
typedef int bool;

int main(){

	long long num;
	int remain;
	bool exist[10] = {FALSE};
	
	printf("Enter a number:");
	scanf("%lld", &num);

	printf("Repeated digit(s):");
	while(1){
		remain = num%10;
		num = num/10;

		if(exist[remain] == FALSE){
			exist[remain] = TRUE;
		}
		else if(exist[remain] == TRUE){
			printf(" %d", remain);
			exist[remain] = DONE;
		}
		if(num == 0)
			break;		
	}

	putchar('\n');

return 0;
}
