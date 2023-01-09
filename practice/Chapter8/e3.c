#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int bool;

int main(){

	bool weekend[7] = {TRUE, FALSE, FALSE, FALSE, FALSE, FALSE, TRUE};
	bool week[7] = {[0]=TRUE, [6]=TRUE};
	int i;

	for(i=0; i<7; i++){
		printf("%d ", weekend[i]);
	}
	putchar('\n');
	
	for(i=0; i<7; i++){
		printf("%d ", week[i]);
	}
	putchar('\n');

return 0;
}
