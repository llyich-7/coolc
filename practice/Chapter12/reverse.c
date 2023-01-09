#include<stdio.h>

int main(){

	int a[10];
	int *p;
	int i;

	printf("Enter 10 numbers: ");
	for(p = a; p < a + 10; p++){
		scanf("%d", p);
	}

	printf("Reverse order: ");
	for(p = a + 10 - 1; p >= a; p--){
		printf("%d ", *p);
	}
	putchar('\n');

return 0;
}
