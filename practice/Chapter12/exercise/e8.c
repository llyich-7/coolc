#include<stdio.h>
#define N 5

void store_zero(int a[], int n){
	int *p;

	for(p = a; p < a + n; p++){
		*p = 0;
	}

}

int main(){

	int a[N] = {1, 1, 1, 1, 1};
	int i;

	store_zero(a, N);

	for(i = 0; i < N; i++){
		printf("%d ", a[i]);

	}

return 0;
}
