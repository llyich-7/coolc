#include<stdio.h>

void split_date(int day_of_year, int year, int *month, int *day){
	int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
						//1   2   3   4   5   6   7   8   9   10  11  12
	int i;
	
	if(year % 100 == 0){
		if(year % 400 == 0){
			days[1] = 29;
			printf("leap year.\n");
		}
	}
	else if(year % 4 == 0){
		days[1] = 29;
		printf("leap year.\n");
	}
	
	for(i = 0; (day_of_year = day_of_year - days[i]) > 0; i++){
	}
	*month = i + 1;
	*day = day_of_year + days[i];

}

int main(){
	int years;
	int months;
	int days;
	int yd;

	scanf("%d", &years);
	scanf("%d", &yd);

	split_date(yd, years, &months, &days);
	
	printf("%d.%d\n", months, days);

return 0;
}
