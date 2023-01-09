#include<stdio.h>

int day_of_year(int, int, int);
int leap_year(int);

int day_of_year(month, day, year)
int month, day, year;{
	
	int i;
	int sum;
	int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(leap_year(year))
		days[1] = 29;
	
	sum = 0;
	for(i = 0; i < month-1; i++){
		sum += days[i];	
	}

	return sum + day;

}

int leap_year(year)
int year;{

	if(year % 100 == 0){
		if(year % 400 == 0)
			return 1;
	}
	else{
		if(year % 4 == 0)
			return 1;
	}


		
return 0;
}

int main(){
	
	int day;
	int month;
	int year;
	printf("Years month day: ");
	scanf("%d %d %d", &year, &month, &day);

	printf("%d\n", day_of_year(month, day, year));


return 0;
}
