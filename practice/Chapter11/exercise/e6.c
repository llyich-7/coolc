#include<stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest){
	int i;
	*largest = a[0];
	*second_largest = a[0];
	for(i = 0; i < n; i++){
		if(*largest < a[i]){
			*second_largest = *largest;
			*largest = a[i];
		}


	}
	
}

int main(){

	int a[5];
	int i;
	int la;
	int sla;

	for(i = 0; i < 5; i++){
		scanf("%d", &a[i]);
	}

	find_two_largest(a, 5, &la, &sla);

	printf("la: %d\nsla: %d\n", la, sla);

return 0;
}
