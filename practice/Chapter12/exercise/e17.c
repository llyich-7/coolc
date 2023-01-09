#include<stdio.h>
#define LEN 4

int sum_two_dimentional_array(const int a[][LEN], int n){
	int *p;
	int sum = 0;
	
	for(p = a[0]; p < a[0] + (LEN * n); p++){
		sum += *p;
	}

return sum;
}


int main(){

	int a[4][4] = {97, 3};

	printf("%d\n", sum_two_dimentional_array(a, 4));

return 0;
}
