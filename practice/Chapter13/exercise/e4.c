#include<stdio.h>

int read_line(char str[], int n){
	
	char ch;
	char *p;
	p = str;
	for(; (ch = getchar()) != '\n'; ){
		*p++ = ch;
		if((p - str) >= n){
			*p = '\0';
			break;
		}
	}

	return p - str;
}

int main(){

	char str[5];

	read_line(str, 5);
	puts(str);

return 0;
}
