#include<stdio.h>
#include<stdlib.h>
#define STACK_SIZE 100
#define FALSE 0
#define TRUE 1

typedef int bool;

int res[STACK_SIZE] = {0}; 
char formula[STACK_SIZE];
int top;

void stack_overflow(){
	printf("Expression is too complex.\n");
	exit(EXIT_SUCCESS);
}

void stack_underflow(){
	printf("Not enough opreads in expression.\n");
	exit(EXIT_SUCCESS);
}

void make_empty(){
	top = 0;
}

bool is_empty(){
	return top == 0;
}

bool is_full(){
	return top == STACK_SIZE;
}

void push(int num){
	if(is_full()){
		stack_overflow();
	}
	else{
		res[top++] = num;
	}
}


int pop(void){
	if(is_empty()){
		stack_underflow();
	}
	else{
		return res[--top];
	}
}

void formula_read(){
	char ch;
	int i;
	for(i = 0; i < STACK_SIZE; i++){
		formula[i] = '\0';
	}
	make_empty();
	
	printf("Enter an RPN expression: ");

	i = 0;
	while(1){
		scanf(" %c", &ch);
		switch(ch){
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case '+':
			case '-':
			case '*':
			case '/': 
			case '=': 	formula[i++] = ch; break;
			case ' ': 	break;
			case '\n' : break;
			default: exit(0);
		}
		if(ch == '=')
			break;
	}
}

int calculate(){
	int result;
	char ch = '\0';
	int i;
	int num;
	int t1;
	int t2;

	for(i = 0; formula[i] != '\0'; i++){
		switch(formula[i]){
			case '0': push(0); break;	
			case '1': push(1); break;	
			case '2': push(2); break;	
			case '3': push(3); break;	
			case '4': push(4); break;	
			case '5': push(5); break;	
			case '6': push(6); break;	
			case '7': push(7); break;	
			case '8': push(8); break;	
			case '9': push(9); break;
			case '+': t1 = pop(); t2 = pop(); push(t2 + t1); break;
			case '-': t1 = pop(); t2 = pop(); push(t2 - t1); break;
			case '*': t1 = pop(); t2 = pop(); push(t2 * t1); break;
			case '/': t1 = pop(); t2 = pop(); push(t2 / t1); break;
			case '=': num = pop(); 
					  make_empty();
					  ch = '=';
					  break;
			default : break;
		}
		if(ch == '=')
			return num;	
	}
}


int main(){
	
	while(1){
		formula_read();
		printf("Value of expression: %d\n", calculate());
	}

return 0;
}
