#include<stdio.h>

long long fact(int i){
	
return i == 1 ? 1 : i * fact(i-1);
}

int main(){

	int n;

	scanf("%d", &n);

	printf("%lld\n", fact(n));

return 0;
}
