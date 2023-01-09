#include<stdio.h>

int main(){

	char chess_board[8][8];
	int i;
	int j;


	for(i=0; i<8; i++){
		for(j=0; j<8; j++){
			if((i+j)%2)
				chess_board[i][j] = 'R';
			else
				chess_board[i][j] = 'B';

		}

	}
	
	for(i=0; i<8; i++){
		for(j=0; j<8; j++){
			printf("%c ", chess_board[i][j]);
		}
		putchar('\n');
	}


return 0;
}
