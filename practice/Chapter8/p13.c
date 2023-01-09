#include<stdio.h>

int main(){

	int i;
	int j;
	int k = 0;
	char name[20];
	char end[20];

	printf("Enter a first and last name: ");

	do{
		scanf("%c", &name[k]);
		k++;

	}while(name[k-1] != '\n');
	name[k-1] = '\0';
	
	for(j = 0; name[j] == 32; j++){
	}
	for(i = j; name[i] != ' '; i++){
	}
	for( ; name[i] == 32 && name[i+1] == 32; i++){
	}
	i++;
	
	for(k = 0; name[i] != '\0'; i++, k++){
		end[k] = name[i];
	}

	end[k++] = ',';
	end[k++] = ' ';
	end[k++] = name[j];
	end[k] = '\0';

	printf("You enered the name: ");
	for(k = 0; end[k] != '\0'; k++){
		printf("%c", end[k]);
	}
	printf(".\n");

return 0;
}
