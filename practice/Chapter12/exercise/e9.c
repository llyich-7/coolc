#include<stdio.h>

double inner_product(const double a[],
				const double b[],
				int n){
	double *p;
	double *q;
	double product = 0;;

	for(p = a, q = b; p < a + n; q++, p++){
		product += (*p) * (*q);
	}


return product;
}

int main(){
	
	double a[] = {1 ,2, 3, 4, 5};
	double b[] = {1 ,2, 3, 4, 5};

	printf("result: %f\n", inner_product(a, b, 5));

return 0;
}
