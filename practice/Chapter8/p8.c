#include<stdio.h>

int main(){

	int score[5][5];
	int sum_student[5];
	int sum_course[5];
	double mean_student[5];
	double mean_course[5];
	int max_course[5];
	int min_course[5];
	int i;
	int j;
	
	printf("student: calculate||probability||linearAlgebr||psychology||philosophyi\n");

	for(i = 0; i < 5; i++){
		printf("Enter student%d's score: ", i+1);
		for(j = 0; j < 5; j++){
			scanf("%d", &score[i][j]);
		}
	}

	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			sum_student[i] += score[i][j];
		}
	}
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			sum_course[i] += score[j][i];
		}
	}

	for(i = 0; i < 5; i++){
		mean_student[i] = sum_student[i]/5.0;
	}
	
	for(i = 0; i < 5; i++){
		mean_course[i] = sum_course[i]/5.0;
	}


	for(i = 0; i < 5; i++){
		max_course[i] = score[0][i];
		for(j = 0; j < 5; j++){
			if(max_course[i] < score[j][i])
				max_course[i] = score[j][i];
		}
	}

	for(i = 0; i < 5; i++){
		min_course[i] = score[0][i];
		for(j = 0; j < 5; j++){
			if(min_course[i] > score[j][i])
				min_course[i] = score[j][i];
		}
	}

	printf("Sum of student:\n");
	for(i = 0; i < 5; i++){
		printf("student%d:%d\n", i+1, sum_student[i]);
	}
	putchar('\n');
	
	printf("Mean of student:\n");
	for(i = 0; i < 5; i++){
		printf("student%d:%f\n", i+1, mean_student[i]);

	}
	putchar('\n');

	printf("Mean of course:\n");
	for(i = 0; i < 5; i++){
		printf("course%d:%f\n", i+1, mean_course[i]);

	}
	putchar('\n');
	
	printf("Max of course:\n");
	for(i = 0; i < 5; i++){
		printf("course%d:%d\n", i+1, max_course[i]);
	}
	putchar('\n');

	printf("Min of course:\n");
	for(i = 0; i < 5; i++){
		printf("course%d:%d\n", i+1, min_course[i]);
	}
	putchar('\n');


return 0;
}
