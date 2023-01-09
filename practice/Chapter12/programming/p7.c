#include<stdio.h>

void max_min(int a[], int n, int *max, int *min){
	int i;
	int *p;

	*max = a[0];
	*min = a[0];
	for(p = a; p < a + n; p++){
		if(*max < *p)
			*max = *p;
		if(*min > *p)
			*min = *p;
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
