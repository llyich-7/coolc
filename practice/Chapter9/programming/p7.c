#include<stdio.h>

double power_even(double x, int n);
double power_odd(double x, int n);
double power(double x, int n);

double power_even(double x, int n){
	int reg;
	if(n == 1)
		return x;
	else if (n % 2 != 0){
		return power_odd(x, n);
	}
	else{
		reg = power_even(x, n/2); 
		return reg * reg;	
	}
}

double power_odd(double x, int n){
	if(n == 1)
		return x;
	else
		return x*power(x, n-1);

}

double power(double x, int n){
	if(n % 2 == 0)
		return power_even(x, n);		
	else
		return power_odd(x, n);
	


}

int main(){

	int n;
	double x;

	scanf("%lf", &x);
	scanf("%d", &n);

	printf("%.2f\n", power(x, n));

return 0;
}
