#include <stdio.h>

int power(int, int);

int main(int argc, char **argv)
{
	
	int n,p;
	scanf("%d %d",&n,&p);
	
	if (n <=1000 && p>=0)
	{
		printf("%d", power(n,p));
	}
	
	return 0;
}

int power (int n, int p)
{
	
	int a=1;
	for (int i = 1; i <= p; i++)
	{
		a *= n;
	}

	return a;
}
