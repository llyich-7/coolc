#include<stdio.h>

int main(){

	int i;
	int feb[40];
	feb[0] = 1;
	feb[1] = 1;

	for(i=2; i<40; i++){
		feb[i] = feb[i-1] + feb[i-2];
	}

	for(i = 0; i < 40; i++){
		printf("%d\n", feb[i]);

	}

return 0;
}
