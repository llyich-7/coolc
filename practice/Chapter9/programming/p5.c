#include<stdio.h>

void create_magic_square(int num, int square[99][99]);
void print_magic_square(int num, int square[99][99]);

void create_magic_square(int num, int square[99][99]){
	int k;
	int i;
	int j;

	k = (num+1)/2 - 1;
	i = 0;
	j = 0;
	square[0][k]= 1;
	for(i = 2; i <= num*num; i++){
		if(j == 0){
			j = num-1;
		}
		else{
			j--;
		}
		if(k == num -1){
			k = 0;
		}
		else{
			k++;
		}
			
		if(square[j][k] != 0){
			if(j == num - 1){
				j = 0;
			}
			else{
				j++;
			}
				
			if(j == num - 1){
				j = 0;
			}
			else{
				j++;
			}
			
			if(k == 0){
				k = num - 1;
			}
			else{ 
				k--;
			}
		}
		square[j][k] = i; 
	
		}
}

void print_magic_square(int num, int square[99][99]){
	int i;
	int j;

	for(i = 0; i < num; i++){
		for(j = 0; j < num; j++){
			printf(" %5d", square[i][j]);
		}
	putchar('\n');
	}

}

int main(){
	
	int num;
	int square[99][99] = {0};

	printf("This progrem creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &num);

	if(num % 2 == 0  || num < 1){
		printf("You didn't follow the rules.\n");
	}
	else{
		create_magic_square(num, square);
		print_magic_square(num, square);
	}

return 0;
}
