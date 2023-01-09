#include<stdio.h>

int gcd(int, int);

void reduce(int numerator, int denominator, 
			int *reduced_numerator, 
			int *reduced_denominator){
	int reg;

	reg = gcd(numerator, denominator);
	printf("reg: %d\n", reg);
	*reduced_numerator = numerator / reg;
	*reduced_denominator = denominator / reg;

}

int gcd(int m, int n){
	

	if(n == 0)
		return m;
	else{
		return gcd(n, m%n);
	}

}

int main(){

	int numerator;
	int denominator;
	int reduced_numerator;
	int reduced_denominator;

	printf("Enter a fraction:");
	scanf("%d/%d", &numerator, &denominator);

	reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

	printf("%d/%d\n", reduced_numerator, reduced_denominator);

return 0;
}
