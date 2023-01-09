#include<stdio.h>

int evaluate_position(char board[8][8]);
int evaluate_position(char board[8][8]){
	int i;
	int j;
	int sum_white = 0;
	int sum_black = 0;
	int value[26] = {['Q' - 65] = 9, 
					['R' - 65] = 5, 
					['B' - 65] = 3,
					['N' - 65] = 3,
					['P' - 65] = 1};

	for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++){
			if(board[i][j] >= 65 && board[i][j] <= 90){
				sum_white += value[board[i][j] - 65];
			}
			if(board[i][j] >= 97 && board[i][j] <= 122){
				sum_black += value[board[i][j] - 97];
			}

		}
	}
	
return sum_white - sum_black;
}


int main(){

	char board[8][8];
	int i;
	int j;

	for(i = 0; i < 8; i++){
		for(j = 0; j < 8;){
			scanf("%c", &board[i][j]);
			if(board[i][j] != ' ' && board[i][j] != '\n')
				j++;
		}
	}
	
	printf("result: %d\n", evaluate_position(board));


return 0;
}
