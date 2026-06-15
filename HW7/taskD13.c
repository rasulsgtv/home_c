#include <stdio.h>

void print_simple(int, int);

int main(int argc, char **argv)
{	
	int d =2;
	int n;
	scanf("%d",&n);
	
	print_simple(n,d);

	return 0;
}

void print_simple(int n, int d)
{
	if (n>1)
	{
		if (n%d ==0)
		{
			printf("%d ",d);
			print_simple(n/d, d);
		}
		else
		{
		print_simple(n, d+1);
		}
	}
}
