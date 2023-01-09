#include<stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec){

	*hr = total_sec / 3600;
	*min = (total_sec % 3600) / 60;
	*sec = total_sec % 60;

}

int main(){

	long total_sec;
	int hour;
	int minute;
	int second;

	scanf("%ld", &total_sec);

	split_time(total_sec, &hour, &minute, &second);

	printf("%02d:%02d:%02d\n", hour, minute, second);

return 0;
}
