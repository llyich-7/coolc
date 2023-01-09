#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define SIZE 10



char map[SIZE][SIZE];
int ma[SIZE+2][SIZE+2] = {0};

int road(int i, int j){
	int flag[4] = {0};
	int re;
	i++;
	j++;
	if(ma[i+1][j] == 0)
		flag[3] = 1;
	if(ma[i][j+1] == 0)
		flag[1] = 1;
	if(ma[i-1][j] == 0)
		flag[2] = 1;
	if(ma[i][j-1] == 0)
		flag[0] = 1;
	re = flag[0]*8 + flag[1]*4 + flag[2]*2 + flag[3];

	return re;
}

int main(){

	srand((unsigned)time(NULL));

	int i;
	int j;
	int round;
	int num;
	int can_go;
	int end = 0;
	
	for(i = 0; i < SIZE+2; i++){
		ma[0][i] = 2;
	}
	for(i = 0; i < SIZE+2; i++){
		ma[SIZE+2-1][i] = 2;
	}
	for(i = 0; i < SIZE+2; i++){
		ma[i][0] = 2;
	}
	for(i = 0; i < SIZE+2; i++){
		ma[i][SIZE+2-1] = 2;
	}
	for(i = 0; i < SIZE; i++){
		for(j = 0; j < SIZE; j++){
			map[i][j] = '.';
		}
	}
	
	i = 0;
	j = 0;
	map[i][j] = 'A';
	ma[i+1][j+1] = 1;
	for(round = 1; round < 26;){
		can_go = road(i, j);
		switch(can_go){
			case 0: end = 1;
					break;

			case 1: i++;
					break;
					
			case 2: i--;
					break;

			case 3: num = rand() % 2;
					if(num == 0)
						i--;
					else
						i++;
					break;

			case 4: j++;
					break;

			case 5: num = rand() % 2;
					if(num == 0)
						i++;
					else
						j++;
					break;

			case 6: num = rand() % 2;
					if(num == 0)
						i--;
					else
						j++;
					break;

			case 7: num = rand() % 3;
					switch(num){
						case 0: i++;
								break;
						case 1: i--;
								break;
						case 2: j++;
								break;
					}
					break;

			case 8: j--;
					break;

			case 9: num = rand() % 2;
					if(num == 0)
						j--;
					else
						i++;
					break;

			case 10: num = rand() % 2;
					if(num == 0)
						j--;
					else
						i--;
					 break;

			case 11: num = rand() % 3;
					switch(num){
						case 0: i++;
								break;
						case 1: i--;
								break;
						case 2: j--;
								break;
					}
					break;

			case 12: num = rand() % 2;
					if(num == 0)
						j--;
					else
						j++;
					 break;

			case 13: num = rand() % 3;
					switch(num){
						case 0: j++;
								break;
						case 1: i++;
								break;
						case 2: j--;
								break;
					}
					break;

			case 14: num = rand() % 3;
					switch(num){
						case 0: j++;
								break;
						case 1: i--;
								break;
						case 2: j--;
								break;
					}
					break;
			case 15: num = rand() % 4;
					 switch(num){
						case 0: i++;
								break;
						case 1: i--;
								break;
						case 2: j++;
								break;
						case 3: j--;
								break;
					 }
					break;

			default : break;
		}
		if(end == 1)
			break;

		ma[i+1][j+1] = 1;
		map[i][j] = round + 65;
		round++;
	}

	for(i = 0; i < SIZE; i++){
		for(j = 0; j < SIZE; j++){
			printf("%c ", map[i][j]);
		}
		putchar('\n');
	}


return 0;
}
