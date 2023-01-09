#include<stdio.h>
#define STACK_SIZE 20

char brace[STACK_SIZE];
int top;
int bottom;

int main(){
	
	char ch;
	bottom = 0;
	top = 0;

	for(top = 0; top < STACK_SIZE;){
		
		ch = getchar();
		if(ch == '\n')
			break;
		switch(ch){
			case '(': brace[top++] = ch; break;
			case '{': brace[top++] = ch; break;
			case ')': if(brace[--top] != '(') printf("Doesn't Match.\n"); break;
			case '}': if(brace[--top] != '{') printf("Doesn't Match.\n"); break;
			default: break;
		}
			
	}

	if(top == bottom)
			printf("Match!\n");

return 0;
}
