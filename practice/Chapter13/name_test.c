#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
	
	int i;
	int j;
	char *plants[] = {	"Mercury", "Venus", "Earth", "Mars",
						"Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
	for(i = 1; i < argc; i++){
		for(j = 0; j < 9; j++){
			if(strcmp(argv[i], plants[j]) == 0){
				printf("%s is planet %d\n", argv[i], j+1);
				break;
			}
		
		}
		if(j == 9){
			printf("%s is not a plant\n", argv[i]);
		}
	}

return 0;
}
