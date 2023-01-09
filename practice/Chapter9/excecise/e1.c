#include<stdio.h>

double triangle_area(base, height)
double base, height;
{
	double product;
	product = base * height;
	
	return product / 2;

}

int main(){

	double base = 2;
	double height = 3;

	printf("%f\n", 	triangle_area(base, height));

return 0;
}
