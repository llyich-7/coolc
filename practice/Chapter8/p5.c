#include<stdio.h>

int main(){

	int rate;
	int num_years;
	double value[5];
	int i;
	int year;
	int month;

	printf("Enter interest rate:");
	scanf("%d", &rate);

	printf("Enter number of years:");
	scanf("%d", &num_years);

	for(i = 0; i < 5; i++){
		value[i] = 100;
	}

	printf("Years\t  %d%%\t  %d%%\t  %d%%\t  %d%%\t  %d%%\n", 
				rate, rate+1, rate+2, rate+3, rate+4);
	for(year = 1; year <= num_years; year++){
		printf("  %d", year);
		for(month = 1; month <= 12; month++){
			for(i = 0; i < 5; i++){
				value[i] += value[i]*(rate+i)*0.01*(1/12.0);
			}
		}
		
		for(i = 0; i < 5; i++){
			printf("\t%.2f", value[i]);
		}
		putchar('\n');

	}

return 0;
}
