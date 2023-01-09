#include<stdio.h>

int main(){

	int a[10];
	int i;
	char ch;

	for(i = 0; i < 10; i++){
		a[i] = i;
	}


	for(ch = '0'; ch <= '9'; ch++){
		printf("%d ", a[ch - '0']);
	}
	putchar('\n');
return 0;
}
