#include<stdio.h>

int main(){

	char sen[99];
	char rsen[99];
	int i = 0;
	int j;
	int out;
	char ch;
	int flag;

	while(ch = getchar()){
		out = 0;
		if(ch >= 65 && ch <= 90)
			ch = ch + 32;

		switch(ch){
			case ' ':
			case ',': break;
			case '!':
			case '.':
			case '?':
			case '~':
			case '\n': out = 1; break;
			default: sen[i++] = ch; break;
		}
		if(out == 1)
			break;
	}

	sen[i--] = '\0';

	for(j = 0; i >= 0; i--, j++){
		rsen[j] = sen[i]; 
	}
	rsen[j] = '\0';
	
	puts(sen);
	putchar('\n');
	puts(rsen);
	putchar('\n');

	flag = 1;
	for(i = 0; sen[i] != '\0'; i++){
		if(sen[i] == rsen[i]){
			flag = 1;
		}
		else{
			flag = 0;
			break;
		}
	}

	printf("%d\n", flag);


return 0;
}
