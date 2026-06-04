#include <stdio.h>

void print_simple(int);

int main(int argc, char **argv)
{	
	int n;
	scanf("%d",&n);
	
	print_simple(n);

	return 0;
}

void print_simple(int n)
{
	int d=2;
	while (n>1)
	{
		if (n % d ==0)
		{
			printf("%d ",d);
			n /=d;
		}
		else
		{
			d++;
		}
	}
}
