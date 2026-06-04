#include <stdio.h>
#include <math.h>

#define PI 3.1415926535

float sinus(float);

int main(int argc, char **argv)
{	
	float x;
	scanf("%f",&x);
	x*=PI/180.0;
	
	printf("%.3f",sinus(x));
	return 0;
}

float sinus(float x)
{
	float Xn = x;
	float sum =0.0;
	
	for (int i = 1; fabs(Xn) > 0.001; i++)
	{
		sum+=Xn;
		Xn *= -1.0 *x*x/((2*i)*(2*i+1));
	}
	return sum;
}
