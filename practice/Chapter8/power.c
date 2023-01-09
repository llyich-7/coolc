#include<stdio.h>

unsigned long long
power(int n, int x){

	return n == 0 ? 1 : x * power(n-1, x);
}

int main(){



return 0;
}
