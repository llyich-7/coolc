#include<stdio.h>

int num_digits(n)
int n;{
	int i;

	for(i = 0; n != 0; i++){
		n = n / 10;
	}

return i;
}

int main(){
	int n;
	scanf("%d", &n);

	printf("%d\n", num_digits(n));


return 0;
}
