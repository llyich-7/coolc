#include<stdio.h>

void max_min(int a[], int n, int *max, int *min){
	int i;
	*max = a[0];
	*min = a[0];
	for(i = 0; i < n; i++){
		if(*max < a[i])
			*max = a[i];
		if(*min > a[i])
			*min = a[i];
	}
}

int main(){
	int a[20];
	int i;
	int big;
	int small;

	for(i = 0; i < 10; i++){
		scanf("%d", & a[i]);
	}

	max_min(a, 10, &big, &small);

	printf("Big: %d\nSmall: %d\n", big, small);

return 0;
}
