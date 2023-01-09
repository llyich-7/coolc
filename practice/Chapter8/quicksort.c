#include<stdio.h>

void quicksort(int n, int a[]){
	
	int i = 0;
	int reg;

	if(n <= 1)
		return;
	else{
		for(i = 0; i < n-1; i++){
			if(a[i] > a[i+1]){
				reg = a[i+1];
				a[i+1] = a[i];
				a[i] = reg;
			}

		}
	}
	quicksort(n-1, a);

	return; 
}

int main(){
	
	int n;
	int i;
	scanf("%d", &n);
	int num[n];

	for(i = 0; i < n; i++){
		scanf("%d", &num[i]);
	}
	
	quicksort(n, num);

	putchar('\n');

	for(i = 0; i < n; i++){
		printf("%d ", num[i]);
	}

	putchar('\n');
	

return 0;
}
