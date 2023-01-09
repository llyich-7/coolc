#include<stdio.h>

double tax(double income){
	
	if(income < 0)
		return 0;
	else if(income < 750)
			return income * 0.01;
	else if(income < 2250)
			return (income - 750) * 0.02 + 7.5;
	else if(income < 3750)
			return (income - 2250) * 0.03 + 37.5;
	else if(income < 5250)
			return (income - 3750) * 0.04 + 82.5;
	else if(income < 7000)
			return (income - 5250) * 0.05 + 142.5;
	else 
		return (income - 7000) * 0.06 + 230;

}

int main(){

	double income;

	scanf("%lf", &income);
	printf("tax: %.2f\n", tax(income));

return 0;
}
