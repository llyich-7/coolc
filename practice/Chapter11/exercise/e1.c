#include<stdio.h>

int main(){
	
	int i = 0;;
	int *p = &i;

	printf("*p: %d\n", *p);
	printf("&p: %p\n", &p);
	printf("*&p: %p\n", *&p);
	printf("&*p: %p\n", &*p);
	printf("&i: %p\n", &i);
	printf("*&i: %d\n", *&i);


return 0;
}
