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

int hand[5][2];
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
	int card;
	int rank;
	int suit;
	int reg_num;
	int reg_ch;
	bool card_exist[NUM_RANKS][NUM_SUITS];
	bool double_true = FALSE;
	bool bad_true = FALSE;
	int card_read = 0;

	for(card = 0; card < NUM_CARDS; card++){
		for(suit = 0; suit < 2; suit++){
			hand[card][suit] = 0;
		}
	}

	while(card_read < NUM_CARDS){
		bad_true = FALSE;
		double_true = FALSE;

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

		for(rank = 0; rank < NUM_CARDS; rank++){
			if(hand[rank][0] == reg_num){
				if(hand[rank][1] == reg_ch){
					double_true == TRUE;
					break;
				}
			}
		}

		if(bad_true == TRUE){
			printf("Bad card. ignored.\n");
		}
		else if(double_true == TRUE){
			printf("Duplicate card. ignored.\n");
		}
		else{
			hand[card_read][0] = reg_num;
			hand[card_read][1] = reg_ch;
			card_read++;
		}
	}
}

void analyze_card(){
	int card;
	int i;
	int suit;
	int reg;
	int rank[13] = {0};
	int number;

	for(card = 0; card < 5; card++){
		rank[hand[card][0]]++;
	}

	straight = 0;
	flush = 0;
	four = 0;
	three = 0;
	pairs = 0;
	
	number = 0;
	for(i = 0; i < 12; i++){
		if(rank[i] == 1 && rank[i+1] ==1){
			number++;
			if(number == 4){
				straight++;
				break;
			}
		}
		else{
			number = 0;
		}

	}

	reg = hand[0][1];
	for(card = 1; card < 5; card++){
		if(hand[card][1] == reg){
			flush = 1;
			continue;
		}
		flush = 0;
		break;
	}
	
	for(card = 0; card < 13; card++){
		switch(rank[card]){
			case 2: pairs++; break;
			case 3: three++; break;
			case 4: four++;  break;
			default: break;
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
