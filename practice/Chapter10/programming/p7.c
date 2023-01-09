#include<stdio.h>
#define MAX_DIGITS 10


const int segment[10][7]={
						{1, 1, 1, 1, 1, 1, 0}, 	//0
						{1, 1, 0, 0, 0, 0, 0},	//1
						{1, 0, 1, 1, 0, 1, 1},	//2
						{1, 1, 1, 0, 0, 1, 1},	//3
						{1, 1, 0, 0, 1, 0, 1},	//4
						{0, 1, 1, 0, 1, 1, 1},	//5
						{0, 1, 1, 1, 1, 1, 1},	//6
						{1, 1, 0, 0, 0, 1, 0},	//7
						{1, 1, 1, 1, 1, 1, 1},	//8
						{1, 1, 1, 0, 1, 1, 1}	//9
};//					 0  1  2  3  4  5  6

char digits[3][4 * MAX_DIGITS];

void clear_digits_array();
void process_digit(int digit, int position);
void print_digits_array(void);

void clear_digits_array(){
	int i;
	int j;

	for(i = 0; i < 3; i++){
		for(j = 0; j < 4 * MAX_DIGITS; j++){
			digits[i][j] = ' ';
		}
	}
}

void process_digit(int digit, int position){
	position = position * 4;
	int i;
	int j;

	for(i = 0; i < 7; i++){
		if(segment[digit][i] == 1){
			switch(i){
				case 0: digits[1][position + 2] = '|'; break;
				case 1: digits[2][position + 2] = '|'; break;
				case 2: digits[2][position + 1] = '_'; break;
				case 3: digits[2][position] = '|'; break;
				case 4: digits[1][position] = '|'; break;
				case 5: digits[0][position + 1] = '_'; break;
				case 6: digits[1][position + 1] = '_'; break;
				default : break;
			}
		}
	}
}

void print_digits_array(){
	int i;
	int j;

	for(i = 0; i < 3; i++){
		for(j = 0; j < MAX_DIGITS * 4; j++){
			printf("%c", digits[i][j]);
		}
		putchar('\n');
	}

}


int main(){

	int i;
	char str[20];
	int dig[10] = {0};
	char ch;
	while(1){
		
		printf("Enter a number: ");
		for(i = 0; (ch = getchar()) != '\n';){
			
			if(ch >= '0' && ch <= '9'){
				str[i] = ch;
				i++;
			}
		}
		
		clear_digits_array();
		for(i = 0; str[i] != '\0'; i++){
			process_digit(str[i] - '0', i);

		}

		print_digits_array();
		putchar('\n');
	}


return 0;
}
