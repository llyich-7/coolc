#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int roll_dice(void);
int play_game(void);

int roll_dice(void){	
	int r1;
	int r2;
	r1 = (rand() % 6) + 1;
	
	r2 = (rand() % 6) + 1;
	
return r1 + r2 ;
}

int play_game(void){
	int result;
	int aim;

	result = roll_dice();
	printf("your rolled: %d\n", result);

	if(result == 7 || result == 11)
		return 1;
	else if(result == 2 || result == 3 || result == 12){
		return 0;	
	}
	else{
		aim = result;
		printf("your point is: %d\n", aim);

		do{
			result = roll_dice();
			printf("your rolled: %d\n", result);
			if(result == 7)
				return 0;

		}while(aim != result);
		return 1;
	}

}

int main(){
	int ch;
	int win = 0;
	int loss = 0;
	srand((unsigned) time(NULL));

	while(1){
		
		if(play_game() == 1){
				win++;
				printf("You win!\n");
		}
		else{
				loss++;
				printf("You loss!\n");
		}
		printf("play again?");
		ch = getchar();

		if(ch == 'y' || ch == 'Y'){
			getchar();
			putchar('\n');
			continue;
		}
		else{
			putchar('\n');
			printf("Wins: %d\tLosses: %d\n", win, loss);
			break;
		}
	}

return 0;
}
