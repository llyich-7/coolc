#include<stdio.h>

void swap(int *p, int *q){
	int reg;

	reg = *p;
	*p = *q;
	*q = reg;
	
}

int main(){

	int i = 1;
	int j = 5;

	swap(&i, &j);

	printf("i = %d\nj = %d\n", i, j);

return 0;
}
