#include<stdio.h>

int main(){

	int years;
	int rate_low;
	double value[5] = {0};
	int rates[5];
	int number_year;
	int i;

	printf("Enter interest rate: ");
	scanf("%d", &rate_low);
	printf("Enter number of years: ");
	scanf("%d", &number_year);

	for(i = 0; i < 5; i++){
		rates[i] = rate_low + i;
		value[i] = 100;
	}

	printf("Years\t  %d%%\t  %d%%\t  %d%%\t  %d%%\t  %d%%\n", rates[0], rates[1], rates[2], rates[3], rates[4]);
	
	for(years = 1; years <= number_year; years++){
			printf("  %d", years);
			for(i = 0; i < 5; i++){
				value[i] = rates[i]*value[i]*0.01 + value[i];
				printf("\t%.2f", value[i]);
			}
			printf("\n");
	}

return 0;
}
