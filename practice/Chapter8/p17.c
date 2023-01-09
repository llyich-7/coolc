#include<stdio.h>

int main(){
	
	int i;
	int j;
	int k;
	int p;
	int q;
	int num;
	int square[99][99] = {0};

	printf("This progrem creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &num);

	if(num % 2 == 0){
		printf("You didn't follow the rules.\n");
	}
	else{
	
		k = (num+1)/2 - 1;
		i = 0;
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
	
			for(p = 0; p < num; p++){
				for(q = 0; q < num; q++){
					printf(" %5d", square[p][q]);
				}
				putchar('\n');
			}
	
			putchar('\n');
		}

		for(i = 0; i < num; i++){
			for(j = 0; j < num; j++){
				printf(" %5d", square[i][j]);
			}
		putchar('\n');
		}
	
	
	
	
	
	}



return 0;
}
