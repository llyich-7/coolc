#include<stdio.h>

double inner_product(double a[], double b[], int n);

double inner_product(double a[], double b[], int n){
	double sum;
	int i;
	
	sum = 0;
	for(i = 0; i < n; i++){
		sum = a[i]*b[i] + sum;
	}
return sum;
}

int main(){
	
	int n;
	int i;

	scanf("%d", &n);
	
	double a[n];
	double b[n];
	
	printf("Enter a[n]: ");
	for(i = 0; i < n; i++){
		scanf("%lf", &a[i]);
	}
	
	printf("Enter b[n]: ");
	for(i = 0; i < n; i++){
		scanf("%lf", &b[i]);
	}

	printf("inner product of a, b: %.2f\n", inner_product(a, b, n));


return 0;
}
