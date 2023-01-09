#include<stdio.h>
#define N 5
int sum_array(const int *p, int n){

	int sum;
	int *q;

	sum = 0;
	for(q = p; p < q + n; p++)
		sum += *p;

	return sum;
}

int main(){

	int i;
	int a[N];

	for(i = 0; i < N; i++){
		scanf("%d", &a[i]);
	}

	printf("Sum: %d\n", sum_array(a, N));

return 0;
}
