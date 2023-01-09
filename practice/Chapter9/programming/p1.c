#include<stdio.h>

void selection_sort(int n, int a[]){
	if(n <= 1)
		return;

	int i;
	int reg;

	for(i = 0; i < n-1; i++){
		if(a[i] > a[i+1]){
			reg = a[i+1];
			a[i+1] = a[i];
			a[i] = reg;
		}
	}
	selection_sort(n-1, a);

}

int main(){

	int i;
	int n;

	scanf("%d", &n);
	int a[n];

	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	selection_sort(n, a);

	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	putchar('\n');


return 0;
}
