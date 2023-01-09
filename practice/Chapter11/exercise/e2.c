#include<stdio.h>

int main(){
	
	int i = 0;;
	int *p;
	int *q;

	p = i;
	*p = &i;
	&p = q;
	p = &q;
	p = *&p;
	p = q;
	p = *q;
	*p = q;
	*p = *q;



return 0;
}
