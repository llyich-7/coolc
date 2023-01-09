#include<stdio.h>
#define N 10

int main(){

	int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int *p = &a[0], *q = &a[N-1];
	int temp;

	while(p < q){
		temp = *p;
		*p++ = *q;
		*q-- = temp;
	}

	for(temp = 0; temp < N; temp++){
		printf("%d ", a[temp]);
	}
	putchar('\n');

return 0;
}
