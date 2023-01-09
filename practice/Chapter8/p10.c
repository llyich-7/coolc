#include<stdio.h>

int findtime(int hour, int minute){
	int time;
	time = 60 * hour + minute;


	return time;
}

int abs(int num){
	if(num < 0)
		num = -num;
	
	return num;
}

int main(){

	int arrive[8];
	int takeoff[8];
	int i;
	int hour;
	int minute;
	int time;

	arrive[0] = findtime(10,16);
	arrive[1] = findtime(11,52);
	arrive[2] = findtime(13,31);
	arrive[3] = findtime(15,0);
	arrive[4] = findtime(16,8);
	arrive[5] = findtime(17,55);
	arrive[6] = findtime(21,20);
	arrive[7] = findtime(23,58);

	takeoff[0] = findtime(8,0);
	takeoff[1] = findtime(9,43);
	takeoff[2] = findtime(11,19);
	takeoff[3] = findtime(12,47);
	takeoff[4] = findtime(14,0);
	takeoff[5] = findtime(15,45);
	takeoff[6] = findtime(19,0);
	takeoff[7] = findtime(21,45);

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);
	time = findtime(hour, minute);
	
	if(time > findtime(21,45))
		printf("Tomorrow.\n");
	else{
		for(i = 0; takeoff[i] < time; i++){
		}
		printf("Closest departure time is ");
		printf("%2d:%02d ", takeoff[i]/60, takeoff[i]%60);
		printf("arriving at %2d:%02d.\n", arrive[i]/60, arrive[i]%60);
	}
return 0;
}
