#include<stdio.h>
#include<string.h>
#define N 100


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

	char reminder[31][N + 1] = {'\0'};
	char ch;
	int i;
	int reg;

	for(i = 0; i < 31; i++){
		printf("Enter day and reminder: ");
		scanf("%d", &reg);
		if(reg == 0)
			break;
		read_line(reminder[reg-1], N);
	}
	
	printf("Day  Reminder\n");
	for(i = 0; i < 31; i++){
		if(strlen(reminder[i]) > 0){
			printf("%2d  %s\n", i+1, reminder[i]);
		}
	}
	



return 0;
}
