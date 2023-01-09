#include<stdio.h>

int my_strlen(char *str){

	char *p = str;

	while(*p)
		p++;
return p - str;
}

int main(){

	char str[99];

	scanf("%s", str);
	printf("%d\n", my_strlen(str));

return 0;
}
