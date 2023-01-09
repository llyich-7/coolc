#include<stdio.h>

int main(){

	char sentence[99];
	char ch;
	char *p = sentence;

	while((ch = getchar()) != '\n'){
		*p++ = ch;	
	}
	*p = '\0';

	for(; p >= sentence; p--){
		putchar(*p);
	}
	putchar('\n');

return 0;
}
