#include<stdio.h>

unsigned long long 
factorial(int n){
	if(n <= 1)
		return 1;
	else
		return n*factorial(n-1);
}

int main(){
	
	int n = 10;
	scanf("%d", &n);
	printf("%lld\n", factorial(n));

return 0;
}
