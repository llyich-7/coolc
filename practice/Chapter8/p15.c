#include<stdio.h>

int main(){

	char message[81];
	char encry[81];
	int num;
	int i;

	printf("Enter message to be encrypted: ");
	i = 0;
	do{
		scanf("%c", &message[i]);
		i++;

	}while(message[i-1] != '\n');
	i--;
	message[i] = '\0';
	
	puts(message);

	printf("Enter shift amount (1-25): ");
	scanf("%d", &num);

	for(i = 0; message[i] != '\0'; i++){
		
		if(message[i] >= 65 && message[i] <= 90 ){
			encry[i] = ((message[i] - 'A') + num) % 26 + 'A';
		}else if(message[i] >= 97 && message[i] <= 122 ){
			encry[i] = ((message[i] - 'a') + num) % 26 + 'a';
		}else{
			encry[i] = message[i];
		}

		
	}
	encry[i] = '\0';

	printf("Encrtpted message: ");
	for(i = 0; encry[i] != '\0'; i++){
		printf("%c", encry[i]);
	}
	putchar('\n');



return 0;
}
