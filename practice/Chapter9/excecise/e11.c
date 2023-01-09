#include<stdio.h>
#include<ctype.h>

float compute_GPA(char grade[], int n);

float compute_GPA(char grade[], int n){
	int i;
	double mean;
	int score[26] = {4, 3, 2, 1, 0, 0};

	mean = 0;

	for(i = 0; i < n; i++){
		mean += score[toupper(grade[i]) - 65];
	}
return mean/n;
}

int main(){

	int n;
	int i;

	scanf("%d", &n);
	char grade[n];

	for(i = 0; i < n;){
		scanf("%c", &grade[i]);
		if(grade[i] != ' ' && grade[i] != '\n')
			i++;
	}

	printf("GPA: %.2f\n", compute_GPA(grade, n));

return 0;
}
