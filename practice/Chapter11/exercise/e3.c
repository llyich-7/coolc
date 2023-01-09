#include<stdio.h>

void avg_sum(double a[], int n, double *sum, double *avg){
	int i;

	*sum = 0;

	for(i = 0; i < n; i++){
		*sum = *sum + a[i];
	}
	
	*avg = *sum / n;
}

int main(){
	
	int n = 5;
	double a[99] = {1, 2, 3, 4, 5};
	double sum;
	double avg;

	avg_sum(a, n, &sum, &avg);
	
	printf("%f %f \n", sum, avg);


return 0;
}
