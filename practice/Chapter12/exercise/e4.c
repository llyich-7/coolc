#include<stdio.h>
#define STACK_SIZE 10

int stack[STACK_SIZE];
int *top_ptr;

int is_empty(){
	return *top_ptr == 0;
}

int is_full(){
	return *top_ptr == STACK_SIZE;
}

void make_empty(){
	top_ptr = &stack[0];
}

int main(){

	make_empty();

	printf("%d\n", is_empty());
	printf("%d\n", is_full());

return 0;
}
