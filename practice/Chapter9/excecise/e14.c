#include<stdio.h>

double median(double x, double y, double z){
	double median;

	if(x <= y){
		if(y <= z){
			median = y;
		}
		else {
			if(x <= z)
				median = z;
			else
				median = x;
		}
	}
	else{								//x > y;
		if(y >= z)
			median = y;
		else							//y < z;
		{	
			if(x >= z)
				median = z;
			else
				median = x;
		}
	}

return median;
}

int main(){

	double x, y ,z;

	scanf("%lf %lf %lf", &x, &y, &z);

	printf("%.2f\n", median(x, y, z));

return 0;
}
