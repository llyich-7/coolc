#include<stdio.h>

int main(){
	
	int i;
	char sentence[100];

	printf("Enter message: ");
	
	i = 0;
	do{
		scanf("%c", &sentence[i]);
		i++;
	} while(sentence[i-1] != '\n');
	
	sentence[i-1] = '\0';

	for(i = 0; sentence[i]; i++){
		if(sentence[i] >= 97 && sentence[i] <= 122)
			sentence[i] -= 32;
		switch(sentence[i]){
			case 'A': sentence[i] = '4';break;
			case 'B': sentence[i] = '8';break;
			case 'E': sentence[i] = '3';break;
			case 'I': sentence[i] = '1';break;
			case 'O': sentence[i] = '0';break;
			case 'S': sentence[i] = '5';break;
			default: ;
		}
	}
	
	printf("In B1ff-speak: ");

	for(i = 0; sentence[i]; i++){
		printf("%c", sentence[i]);
	}
	printf("!!!!!!!!!!\n");

return 0;
}
