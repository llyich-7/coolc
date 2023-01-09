#include<stdio.h>

int main(){

	int a[5];
	int *p;

	p = a;

	printf("a: %d\n", p == a[0]);
	printf("b: %d\n", p == &a[0]);
	printf("c: %d\n", *p == a[0]);
	printf("d: %d\n", p[0] == a[0]);


return 0;
}
