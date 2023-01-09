#include<stdio.h>

int check(x, y, n)
int x, y, n;
{
	if(x >= 0 && x <= n-1 && y >= 0 && y <= n-1)
		return 1;

return 0;
}


int main(){
	int x;
	int y;
	int n;

	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &n);

	printf("result: %d\n", check(x, y, n));

	

return 0;
}
