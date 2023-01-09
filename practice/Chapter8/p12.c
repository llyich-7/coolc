#include<stdio.h>
#include<ctype.h>

int main(){

	int i;
	int sum = 0;
	int value[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
	char word[46];

	printf("Enter a word: ");
	scanf("%s", word);

	for(i = 0; word[i] != '\0'; i++){
		word[i] = toupper(word[i]);
	}

	for(i = 0; word[i] != '\0'; i++){
		sum += value[word[i]-65];
	}
	printf("Scrabble value: %d\n", sum);

return 0;
}
