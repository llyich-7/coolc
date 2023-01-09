#include<stdio.h>

int max(int n, int a[]);
int min(int n, int a[]);
double mean(int n, int a[]);
int counter(int n, int a[]);

int max(int n, int a[n]){
	int reg;
	int i;

	reg = a[0];
	for(i = 0; i < n; i++){
		if(reg < a[i])
			reg = a[i];
	}

return reg;
}

int min(int n, int a[n]){
	int reg;
	int i;

	reg = a[0];
	for(i = 0; i < n; i++){
		if(reg > a[i]){
			reg = a[i];
		}
	}
return reg;
}


double mean(int n, int a[n]){
	int i;
	double reg;
	
	reg = 0;
	for(i = 0; i < n; i++){
		reg += a[i]; 
	}
return reg/n;
}

int counter(int n, int a[n]){

	int i;
	int reg;

	reg = 0;
	for(i = 0; i < n; i++){
		if(a[i] >= 0)
			reg++;
	}

return reg;
}

int main(){
	int n;
	int i;

	scanf("%d", &n);
	int a[n];
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	printf("max: %d\n", max(n, a));
	printf("min: %d\n", min(n, a));
	printf("mean: %f\n", mean(n, a));
	printf("number of positive integer: %d\n", counter(n, a));
	

return 0;
}
