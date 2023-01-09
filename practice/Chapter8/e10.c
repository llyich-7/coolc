#include<stdio.h>

int main(){
	
	int i;
	int j;
	const char chess_board[8][8]={
		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
		[6]={'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		[7]={'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}

	};

	for(i=0; i<8; i++){
		for(j=0; j<8; j++){
			printf("%c ", chess_board[i][j]);

		}
		putchar('\n');
	}

return 0;
}
