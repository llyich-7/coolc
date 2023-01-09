#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define false 0
#define true 1
typedef int bool;

int main(){

	bool in_hand[4][13] = {false};
	int num_cards;
	int rank;
	int suit;
	const char suit_code[4] = {'h', 'c', 'd', 's'};
	const char rank_code[13] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a' };
	
	srand((unsigned) time(NULL));

	printf("Enter number of cards in hand: ");
	scanf("%d", &num_cards);

	printf("Your hand:");
	while(num_cards > 0){
		suit = rand() % 4;
		rank = rand() % 13;
		if(in_hand[suit][rank] == true){
			continue;
		}
		in_hand[suit][rank] = true;
		printf(" %c%c", rank_code[rank], suit_code[suit]);
		num_cards--;
	}
	printf("\n");

return 0;
}
