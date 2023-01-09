#include<stdio.h>
#include<ctype.h>

void read_word(int word[]){
	int i;
	char ch;

	i = 0;
	do{
		scanf("%c", &ch);
		if(ch == '\n')
			break;
		word[tolower(ch) - 'a']++;

	}while(ch != '\n');

}

int equal_array(int word1[], int word2[]){
	int i;
	int flag = 1; 
	
	for(i = 0; i < 26; i++){
		if(word1[i] != word2[i]){
			flag = 0;
			break;
		}
	}

return flag;
}

int main(){

	int word1[26] = {0};
	int word2[26] = {0};
	
	printf("Enter first word: ");
	read_word(word1);

	printf("Enter second word: ");
	read_word(word2);

	if(equal_array(word1, word2) == 1)
		printf("The words are anagrams.\n");
	else
		printf("The words are not anagrams.\n");

return 0;
}
