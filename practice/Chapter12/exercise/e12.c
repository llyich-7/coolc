#include<stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest){
	
	int *p;
	int reg;
	for(p = a, *largest = *a, *second_largest = *a; p < a + n; p++){
		if(*largest < *p){
			reg = *largest;
			*largest = *p;
			*second_largest = reg;
		}
	}
}

int main(){
	
	int a[] = {1, 56, 84, 946, 5646, 152};
	int la;
	int se;
	
	find_two_largest(a, 6, &la, &se);

	printf("first: %d\nsecond: %d\n", la, se);

return 0;
}
