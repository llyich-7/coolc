#include<stdio.h>

void up(int n){

	printf("\033[%dA", n);
	fflush(stdout);

}

void delay(){
	long long i = 10000000;

	while(--i);
}

void down(int n){

	printf("\033[%dB", n);
	fflush(stdout);

}

void clear_screen(){

	printf("\033[2J");
	fflush(stdout);

}

void send(char ch){

	putchar(ch);
	fflush(stdout);


}

int main(){
	
	char ch;
	putchar('\n');
	delay();
	putchar('\n');	
	delay();
	putchar('\n');	
	delay();
	
	while(1){

	ch = getchar();
	switch(ch){
	case 'w': send('*');
			  up(1);
			  break;
	case 's': send('*');
			  down(1);
			  break;
	default: break;

	}

//	send('^');
//	delay();
//	up(3);
//	send('v');
//	delay();
//	down(3);
	}
	
return 0;
}
