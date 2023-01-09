#include<stdio.h>
#include<ctype.h>

int main(){

	int reg[26] = {0};
	int i;
	char ch;
	int flag = 0;

	printf("Enter first word: ");
	i = 0;
	do{
		scanf("%c", &ch);
		if(ch == '\n')
			break;
		reg[tolower(ch) - 'a']++;

	}while(ch != '\n');
	
	printf("Enter second word: ");
	i = 0;
	do{
		scanf("%c", &ch);
		if(ch == '\n')
			break;
		reg[tolower(ch) - 'a']--;

	}while(ch != '\n');

	for(i = 0; i < 26; i++){
		if(reg[i] != 0){
			flag = 1;
			break;
		}

	}

	if(flag == 0)
		printf("The words are anagrams.\n");
	else
		printf("The words are not anagrams.\n");

return 0;
}
