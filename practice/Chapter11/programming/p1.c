#include<stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){

		*twenties = dollars / 20;
		*tens = (dollars % 20) / 10;
		*fives = (dollars % 10) / 5;
		*ones = dollars % 5;

}

int main(){
	
	int dollars;
	int tw;
	int te;
	int fi;
	int on;

	scanf("%d", &dollars);

	pay_amount(dollars, &tw, &te, &fi, &on);

	printf("twenties: %d\ntens: %d\nfives: %d\nones: %d\n", tw, te, fi, on);


return 0;
}
