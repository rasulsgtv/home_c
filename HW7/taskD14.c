#include <stdio.h>

void rec(int);

int main(int argc, char **argv)
{	
	int n =0;
	rec(n);

	return 0;
}

void rec(int n)
{
	scanf("%d",&n);
	
	if (n==0)
	{
		return;
	}
	else if (n%2 != 0)
	{
		printf("%d ", n);
	}
	rec(n);
}
