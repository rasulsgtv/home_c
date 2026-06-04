#include <stdio.h>

int factorial(int);

int main(int argc, char **argv)
{	
	int n;
	scanf("%d",&n);
	
	printf ("%d",factorial(n));

	return 0;
}

int factorial(int n)
{
	int result=1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	
	return result;
}
