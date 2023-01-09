#include<stdio.h>

#define bit(n) (1u << n)

int main(){

	printf("it is %d.\n", (bit(2) & 4));
	printf("it is %d.\n", (bit(2) & 1));
	printf("it is %d.\n", (bit(2) & 2));

return 0;
}
