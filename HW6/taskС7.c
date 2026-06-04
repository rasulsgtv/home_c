#include <stdio.h>

int notation(int, int);

int main(int argc, char **argv)
{
	int n,p;
	scanf("%d %d",&n,&p);
	if (n!=0)
	{
		printf("%d",notation(n,p));
	}
	else
	{
		printf("0");
	}
	return 0;
}

int notation(int n, int p)	
{
	int result = 0;
	int k = 1;
	
	while (n>0)
	{
		int remainder = n%p;
		result += remainder*k;
		k *=10;
		n /= p;
	}
	return result;
}



