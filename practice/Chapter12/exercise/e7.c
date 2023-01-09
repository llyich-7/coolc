#include<stdio.h>
#include<stdbool.h>
#define N 5

bool search(const int a[], int n, int key){
	int *p;
	for(p = a; p < a + n; p++){
		if(*p == key)
			return true;
	}

	return false;
}

int main(){

	int a[N] = {1, 2, 3, 4, 5};
	int key;

	scanf("%d", &key);
	printf("%d\n", search(a, N, key));

return 0;
}
