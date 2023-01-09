#include<stdio.h>

	int minutes_d[8];
	int minutes_a[8];
	


void find_closest_flight(int desire_time, int *departure_time, int *arrival_time){
	int i;

	for(i = 0; minutes_d[i] < desire_time; i++){
	}
	*departure_time = minutes_d[i];
	*arrival_time = minutes_a[i];


}

int change_time(int h, int m){
	
	return h*60 + m;
}

int main(){
	
	minutes_d[0] = change_time(8, 0);
	minutes_d[1] = change_time(9, 43);
	minutes_d[2] = change_time(11, 19);
	minutes_d[3] = change_time(12, 47);
	minutes_d[4] = change_time(14, 0);
	minutes_d[5] = change_time(15, 45);
	minutes_d[6] = change_time(19, 0);
	minutes_d[7] = change_time(21, 45);

	minutes_a[0] = change_time(10, 16);
	minutes_a[1] = change_time(11, 52);
	minutes_a[2] = change_time(13, 31);
	minutes_a[3] = change_time(15, 0);
	minutes_a[4] = change_time(16, 8);
	minutes_a[5] = change_time(17, 55);
	minutes_a[6] = change_time(21, 20);
	minutes_a[7] = change_time(23, 58);
	
	int desire_time;
	int dp;
	int ar;
	int hr;
	int mi;
	
	scanf("%d:%d", &hr, &mi);
	desire_time = hr*60 + mi;


	find_closest_flight(desire_time, &dp, &ar);
		
	printf("dp: %d:%d\nar: %d:%d\n", dp/60, dp%60, ar/60, ar%60);


return 0;
}
