#include<stdio.h>
#include<string.h>
#define N 100
#define NOTE_SIZE 50

int read_line(char a[], int n){
	char *p;

	p = a;
	
	while((*p = getchar()) == ' ');

	for(p++; p < a + n - 1; p++){
		*p = getchar();
		if(*p == '\n')
			break;

	}
	*p = '\0';


return p - a;
}

int main(){

	char reminder[NOTE_SIZE][N + 1] = {'\0'};
	char ch;
	int i;
	int j;
	int reg;
	int day;
	int sequence;
	char temp[N];
	
	for(i = 0; i < NOTE_SIZE; i++){
		printf("Enter day and reminder: ");
		read_line(reminder[i], N);
		
		if(reminder[i][0] == '0'){
			reminder[i][0] = '\0';
			break;

		}
	}
	
	for(i = 0; i < NOTE_SIZE - 1; i++){
		if(strcmp(reminder[i], reminder[i+1]) > 0){
			strcpy(temp, reminder[i]);
			strcpy(reminder[i], reminder[i+1]);
			strcpy(reminder[i+1], temp);
		}
	}

	
	printf("Day  Reminder\n");
	for(i = 0; i < NOTE_SIZE; i++){
		if(strlen(reminder[i]) > 0){
			printf("%s\n", reminder[i]);
		}
	}
	



return 0;
}
