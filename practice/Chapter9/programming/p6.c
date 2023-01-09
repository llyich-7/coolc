#include<stdio.h>

double power(double x, int n){


return n == 1 ? 1 : x * power(x, n-1);
}

double polynomial(double x){
	double sum;
	sum = 0;
	sum = 	  3 * power(x, 5)
			+ 2 * power(x, 4)
			- 5 * power(x, 3)
			- 1 * power(x, 2)
			+ 7 * x
			- 6;

return sum;
}

int main(){

	double x;
	scanf("%Lf", &x);

	printf("result: %.2f\n", polynomial(x));

return 0;
}
