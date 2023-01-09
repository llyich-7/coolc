#include<stdio.h>

int main(){

	int a[5][5];
	int sum_row[5] = {0};
	int sum_col[5] = {0};
	int i;
	int j;

	for(i = 0; i < 5; i++){
		printf("Enter row%d: ", i+1);
		for(j = 0; j < 5; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Row totals: ");
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			sum_row[i] += a[i][j];
		}
		printf("%d ", sum_row[i]);
	}
	putchar('\n');	
	
	printf("column totals: ");
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			sum_col[i] += a[j][i];
		}
		printf("%d ", sum_col[i]);
	}
	putchar('\n');	



return 0;
}
