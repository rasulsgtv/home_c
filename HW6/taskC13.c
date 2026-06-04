#include <stdio.h>
#include <math.h>

#define PI 3.1415926535

float cosx(float);

int main(int argc, char **argv)
{	
	float x;
	scanf("%f",&x);
	x*=PI/180.0;
	
	printf("%.3f",cosx(x));
	return 0;
}

float cosx(float x)
{
	float term = 1.0;
	float sum = 1.0;
	
	int n =1;
	while (fabs(term) > 0.001)
	{
		term*=(-x*x)/((2*n-1)*(2*n));
		sum+=term;
		n++;
	}

	return sum;
}

