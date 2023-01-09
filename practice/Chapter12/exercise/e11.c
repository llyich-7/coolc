#include<stdio.h>

int find_largest(int a[], int n){
	int *p;
	int reg;
	for(p = a, reg = *p; p < a + n; p++){
		if(reg < *p){
			reg = *p;
		}
	}

return reg;
}

int main(){

	int a[] = {1, 65, 98, 58};

	printf("%d\n", find_largest(a, 4));

return 0;
}
