#include<stdio.h>

int main(){

	char *p = "abc";

	putchar(*p);
	putchar('\n');
	putchar(*++p);
	putchar('\n');
	putchar(*++p);
	putchar('\n');
	
	puts(p-2);

return 0;
}
