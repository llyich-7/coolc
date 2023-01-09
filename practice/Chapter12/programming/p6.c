/* sort an array of integers using Quicksort algorithm. */


#include<stdio.h>

#define N 10

void quicksort(int a[], int *low, int *high);
int *split(int a[], int *low, int *high);

int main(){

	int a[N], i;
	
	printf("Enter %d numbers to be sorted: ", N);
	for(i = 0; i < N; i++){
		scanf("%d", &a[i]);
	}

	quicksort(a, &a[0], &a[N -1]);
	printf("In sorted order: ");
	for(i = 0; i < N; i++){
		printf("%d ", a[i]);
	}
	printf("\n");

return 0;
}

void quicksort(int a[], int *low, int *high){

	int *middle;

	if(low >= high) 
		return;
	middle = split(a, low, high);
	quicksort(a, low, middle - 1);
	quicksort(a, middle + 1, high);

}

int *split(int a[], int *low, int *high){

	int *middle;
	int reg;
	int *p;
	int *q;

	p = low;
	q = high;
	reg = *p;
	while(p < q){
		
		while(*q > reg && q > p){
			q--;
		}
		if(p >= q)
			break;
		*p++ = *q;
		
		while(*p < reg && q > p){
			p++;
		}
		if(p >= q)
			break;
		*q-- = *p;
	}
	*p = reg;


return p;
}

