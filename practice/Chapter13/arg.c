#include<stdio.h>

int main(int argc, char *argv[]){

	int i;


	printf("argc = %d\n", argc);
	for(i = 1; i < argc; i++){
		puts(argv[i]);
	}

return 0;
}
