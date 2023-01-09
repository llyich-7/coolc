#include<stdio.h>

long long fact(int i){
	int product = 1;

	for(;i > 0; i--){
		product = product * i;
	}

return product;
}

int main(){

	int n;

	scanf("%d", &n);

	printf("%lld\n", fact(n));

return 0;
}
