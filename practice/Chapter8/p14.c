#include<stdio.h>

int main(){
	
	int i;
	int k;
	char sentence[50];
	char end;
	
	printf("Enter a sentence: ");
	
	k = 0;
	do{
		scanf("%c", &sentence[k]);
		k++;

	}while(sentence[k-1] != '\n');
	sentence[k-1] = '\0';
	
	i = 0;
	while(sentence[i] != '\0')
		i++;

	end = sentence[--i];
	sentence[i] = '\0';

	printf("Reversal of sentence:");
	
	k = i;
	while(k > 0){
		
		while(sentence[k] != ' ' && k > -1){
			k--;
		}
		
		putchar(' ');
		for(i = k+1; sentence[i] != ' ' && sentence[i] != '\0'; i++){
			printf("%c", sentence[i]);
		}

		k--;
	}
	
	putchar(end);
	putchar('\n');

return 0;
}
