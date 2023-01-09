#include<stdio.h>

int digits(n, k)
int n, k;{
	
	int reg;
	int i;
	int digit;
	reg = n;

	if(k > 0)
		k--;
	else if(k < 0)
			return 0;

	for(digit = 0; reg != 0; digit++){
		reg = reg / 10;
	}

	if(k > digit)
		return 0;
	reg = n;
	for(digit = 0; digit < k; digit++){
		reg = reg / 10;
	}

	return reg % 10;

return i;
}

int main(){
	int n, k;

	scanf("%d %d", &n, &k);
	printf("%d\n", digits(n, k));


return 0;
}
