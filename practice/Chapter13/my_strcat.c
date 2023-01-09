#include<stdio.h>

char *my_strcat(char *aim, const char *src){
	char *p;
	
	p = aim;
	while(*p)
		p++;

	while(*p++ = *src++);


return aim;
}

int main(){

	char st[20];
	char ss[20];

	scanf("%s %s", st, ss);

	puts(my_strcat(st, ss));

	puts(st);
	puts(ss);

return 0;
}
