#include<stdio.h>

int main(){
	
	char *p;
	char *q;
	char sentence[50];
	char end;
	
	printf("Enter a sentence: ");
	
	p = sentence;
	do{
		scanf("%c", p);
		p++;

	}while(*(p-1) != '\n');
	*(p-1) = '\0';
	
	p = sentence;
	while(*p != '\0')
		p++;

	end = *(--p);
	*p = '\0';

	printf("Reversal of sentence:");
	
	q = p;
	while(q >= sentence){
		
		while(*q != ' ' && q >= sentence){
			q--;
		}
		
		putchar(' ');
		for(p = q+1; *p != ' ' && *p != '\0'; p++){
			printf("%c", *p);
		}

		q--;
	}
	
	putchar(end);
	putchar('\n');

return 0;
}
