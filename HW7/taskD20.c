#include <stdio.h>



int recurs_power(int n, int p)
{
	if (p==0)
	{
		return 1;
	}
	else
	{
		return n*recurs_power(n,p-1);
	}
}

int main(int argc, char **argv)
{
	

	int n,p;

	scanf("%d %d",&n,&p);
	
	if (n <=1000 && p>=0)
	{
		printf("%d", recurs_power(n,p));
	}
	
	return 0;
}
