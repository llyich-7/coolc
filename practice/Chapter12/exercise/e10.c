#include<stdio.h>

int *find_middle(int a[], int n){
	int *p;
	p = a;

return p + (n/2);
}

int main(){

	int a[] = {1, 2, 3, 4 ,5};

	printf("%d\n", *find_middle(a, 5));

return 0;
}
