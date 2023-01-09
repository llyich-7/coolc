#include<stdio.h>

int evaluate_position(char board[8][8]);
int evaluate_position(char board[8][8]){
	int sum_white = 0;
	int sum_black = 0;
	int value[26] = {['Q' - 65] = 9, 
					['R' - 65] = 5, 
					['B' - 65] = 3,
					['N' - 65] = 3,
					['P' - 65] = 1};
	char *p;
	
	for(p = board[0]; p < board[0] + 64; p++){
		if(*p >= 65 && *p <= 90){
			sum_white += value[*p - 65];
		}
		if(*p >= 97 && *p <= 122){
			sum_black += value[*p - 97];
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
