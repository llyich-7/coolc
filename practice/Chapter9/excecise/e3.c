#include<stdio.h>

int gcd(m, n)
int m, n;
{	
	int reg;

	if(n == 0)
		return m;
	
	reg = n;
	n = m % n;
	m = reg;
	return gcd(m, n);

}

int main(){

	int m, n;

	scanf("%d", &m);
	scanf("%d", &n);
	printf("%d\n", gcd(m, n));


return 0;
}
