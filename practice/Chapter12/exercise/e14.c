#include<stdio.h>
#include<time.h>
#include<stdbool.h>
#include<stdlib.h>

bool search(const int a[], int n, int key){
	int *p;
	for(p = a; p < a + n; p++){
		if(*p == key)
			return true;
	}

	return false;
}


int main(){
	
	srand((unsigned)time(NULL));	
	
	int temperatures[7][24];
	int *p;
	int i;
	int j;
	int key;

	printf("Enter a key to search: ");
	scanf("%d", &key);


	for(p = temperatures[0]; p < temperatures[0] + 7*24; p++){
		*p = 25 + (rand() % 10);
	}

	for(i = 0; i < 7; i++){
		for(j = 0; j < 24; j++){
			printf("%d ", temperatures[i][j]);
		}
		putchar('\n');
	}

	printf("result: %d\n", search(temperatures[0], 7*24, key));


return 0;
}
