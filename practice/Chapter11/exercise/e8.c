#include<stdio.h>

int *find_largest(int a[], int n){
	int i;
	int *reg = &a[0];
	for(i = 0; i < n; i++){
		if(*reg < a[i]){
			reg = &a[i];
		}
	}
return reg;
}

int main(){

	int i;
	int a[99];
	int *p;

	for(i = 0; i < 5; i++){
		scanf("%d", &a[i]);
	}

	p = find_largest(a, 5);
	printf("%d\n", *p);


return 0;
}
