#include<stdio.h>

void quicksort(int n, int a[n]){

	if(n <= 1)
		return;
	else{
		int low;
		int heigh;
		int reg;
		int i;

		low = 0;
		heigh = n-1;

		reg = a[0];
		for(; low != heigh;){
			for(;a[heigh] > reg && heigh > low; heigh--){
			}
			if(low >= heigh)
                break;
			a[low++] = a[heigh];

			for(i = 0; i < n; i++)
				printf("%d ", a[i]);
			putchar('\n');



			for(;a[low] < reg && low < heigh; low++){
			}
            if(low >= heigh)
                break;

            a[heigh--] = a[low];

			for(i = 0; i < n; i++)
				printf("%d ", a[i]);
			putchar('\n');
		}
		a[heigh] = reg;
	}
	return;
}

int main(){

	int i;
	int n;

	scanf("%d", &n);
	int num[n];


	for(i = 0; i < n; i++)
		scanf("%d", &num[i]);

	for(i = 0; i < n; i++)
		printf("%d ", num[i]);
	putchar('\n');

	quicksort(n, num);

	for(i = 0; i < n; i++)
		printf("%d ", num[i]);
	putchar('\n');

return 0;
}
