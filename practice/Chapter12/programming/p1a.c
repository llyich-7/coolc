#include<stdio.h>

int main(){

	char sentence[99];
	char ch;
	int i = 0;

	while((ch = getchar()) != '\n'){
		sentence[i++] = ch;	
	}
	sentence[i] = '\0';

	for(; i >= 0; i--){
		putchar(sentence[i]);
	}
	putchar('\n');

return 0;
}
