#include<stdio.h>
#include<time.h>
#include<stdbool.h>
#include<stdlib.h>

int find_largest(int a[], int n){
	int *p;
	int reg;
	for(p = a, reg = *p; p < a + n; p++){
		if(reg < *p){
			reg = *p;
		}
	}

return reg;
}

int main(){
	
	srand((unsigned)time(NULL));	
	
	int temperatures[7][24];
	int *p;
	int i;
	int j;

	for(p = temperatures[0]; p < temperatures[0] + 7*24; p++){
		*p = 25 + (rand() % 100);
	}

	for(i = 0; i < 7; i++){
		for(j = 0; j < 24; j++){
			printf("%d ", temperatures[i][j]);
		}
		putchar('\n');
	}
	
	putchar('\n');
	
	for(i = 0; i < 7; i++){
		printf("Highest temperature on day%d: %d\n", i+1, find_largest(temperatures[i], 24));
	}

return 0;
}
