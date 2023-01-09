#include<stdio.h>
#include<stdlib.h>
#define NUM_CARDS 5
#define NUM_SUITS 4
#define NUM_RANKS 13
#define FALSE 0
#define TRUE 1
typedef int bool;

void read_card();
void analyze_card();
void print_class();

int num_in_ranks[NUM_RANKS];
int num_in_suits[NUM_SUITS];

int straight;
int flush;
int four;
int three;
int pairs;

int main(){

	while(1){

		read_card();
		analyze_card();
		print_class();

	}

return 0;
}

void read_card(){
	int ch;
	int rank;
	int suit;
	int reg_num;
	int reg_ch;
	bool card_exist[NUM_RANKS][NUM_SUITS];
	bool double_true = FALSE;
	bool bad_true = FALSE;
	int card_read = 0;

	for(rank = 0; rank < NUM_RANKS; rank++){
		num_in_ranks[rank] = 0;
	}
	for(suit = 0; suit < NUM_SUITS; suit++){
		num_in_suits[suit] = 0;
	}
	for(rank = 0; rank < NUM_RANKS; rank++){
		for(suit = 0; suit < NUM_SUITS; suit++){
			card_exist[rank][suit] = FALSE;
		}
	}

	while(card_read < NUM_CARDS){
		bad_true = FALSE;

		printf("Enter a card: ");
		ch = getchar();
		switch(ch){
			case '0': 			exit(EXIT_SUCCESS);
			case '2': 			reg_num = 0; break;
			case '3': 			reg_num = 1; break;
			case '4': 			reg_num = 2; break;
			case '5': 			reg_num = 3; break;
			case '6': 			reg_num = 4; break;
			case '7': 			reg_num = 5; break;
			case '8': 			reg_num = 6; break;
			case '9': 			reg_num = 7; break;
			case 't': case 'T': reg_num = 8; break;
			case 'j': case 'J': reg_num = 9; break;
			case 'q': case 'Q': reg_num = 10; break;
			case 'k': case 'K': reg_num = 11; break;
			case 'a': case 'A': reg_num = 12; break;
			default : 			bad_true = TRUE;break;
		}
		ch = getchar();
		switch(ch){
			case 'c': case 'C': reg_ch = 0; break;
			case 'd': case 'D': reg_ch = 1; break;
			case 'h': case 'H': reg_ch = 2; break;
			case 's': case 'S': reg_ch = 3; break;
			default : 			bad_true = TRUE; break;
		}
		while((ch = getchar()) != '\n')
			if(ch != ' ') bad_true = TRUE;

		if(bad_true == TRUE){
			printf("Bad card. ignored.\n");
		}
		else if(card_exist[reg_num][reg_ch] == TRUE){
			printf("Duplicate card. ignored.\n");
		}
		else{
			card_exist[reg_num][reg_ch] = TRUE;
			card_read++;
			num_in_ranks[reg_num]++;
			num_in_suits[reg_ch]++;
		}
	}
}

void analyze_card(){
	int rank;
	int suit;
	int number;

	straight = 0;
	flush = 0;
	four = 0;
	three = 0;
	pairs = 0;

	for(rank = 0; rank < NUM_RANKS; rank++){
		switch(num_in_ranks[rank]){
			case 2: pairs++; break;
			case 3: three++; break;
			case 4: four++; break;
			defalut : break;
		}
	}

	for(suit = 0; suit < NUM_SUITS; suit++){
		if(num_in_suits[suit] == NUM_CARDS)
			flush++;
	}

	number = 0;
	for(rank = 0; rank < NUM_RANKS - 1; rank++){
		if(num_in_ranks[rank] == 1 && num_in_ranks[rank + 1] == 1)
			number++;
		else if(number == NUM_RANKS - 1){
				straight++;
				break;

		}
		else{
			number = 0;
		}
	}
}

void print_class(){
	if(straight){
		printf("Straight.\n");
		if(flush){
			printf("Flush.\n");
		}
		return;
	}
	if(pairs){
		if(pairs == 1){
			printf("Pairs.\n");
			return;
		}
		else{
			printf("2 Piars.\n");
			return;
		}
	}
	if(three){
		printf("Three.\n");
		return;
	}
	if(flush){
		printf("Flush.\n");
		return;
	}
	if(four){
		printf("Four.\n");
		return;
	}
	printf("High cards.\n");
}
