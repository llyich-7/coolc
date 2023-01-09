#include<stdio.h>

int main(){

	int years;
	int num_years;
	int low_rate;
	int rates[5];
	double value[5] = {100, 100, 100, 100, 100};
	int i;
	int j;

	printf("Enter interest rate: ");
	scanf("%d", &low_rate);
	printf("Enter number of years: ");
	scanf("%d", &num_years);

	for(i = 0; i < num_years; i++){

		rates[i] = low_rate + i;

	}

	printf("Years\t%d%%\t%d%%\t%d%%\t%d%%\t%d%%\n", rates[0], rates[1], rates[2], rates[3], rates[4]);
	for(years = 1; years <= num_years; years++){

			printf("%d\t", years);
		for(i = 0; i < 5; i++){

			value[i] = value[i]*rates[i]*0.01 + value[i];
			printf("%.2f\t", value[i]);

		}
			printf("\n");

	}


return 0;
}
