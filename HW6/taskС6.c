#include <stdio.h>

unsigned long long cell(int);

int main(int argc, char **argv)
{
	int x;
	scanf("%d",&x);
	
	printf("%llu", cell (x));
	
	return 0;
}

unsigned long long cell (int x)
{
	int i;
	long long result=1;

	for (i = 1; i < x; i++)
	{
			result *=2; 
	}
	return result;
}
