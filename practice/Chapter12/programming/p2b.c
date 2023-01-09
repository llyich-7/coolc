#include<stdio.h>

int main(){

	char sen[99];
	char rsen[99];
	int out;
	char ch;
	int flag;
	char *p;
	char *q;

	printf("Enter a message: ");
	p = sen;
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
			default: *p++ = ch; break;
		}
		if(out == 1)
			break;
	}
	*p-- = '\0';
	
	for(q = rsen; p >= sen; p--, q++){
		*q = *p; 
	}
	*q = '\0';
	
	flag = 1;
	for(p = sen, q = rsen; *p != '\0'; p++, q++){
		if(*p == *q){
			flag = 1;
		}
		else{
			flag = 0;
			break;
		}
	}

	if(flag == 1){
		printf("Palindrome.\n");
	}
	else{
		printf("Not a palindrome.\n");
	}


return 0;
}
