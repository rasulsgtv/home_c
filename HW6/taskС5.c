#include <stdio.h>

int total(int, int);

int main(int argc, char **argv)
{
	int x;
	int sum = 0;
	scanf("%d",&x);
	
	printf("%d", total (x, sum));
	
	return 0;
}

int total (int x, int sum)
{
	int i;
	for (i = 1; i <= x; i++)
	{
			sum += i;
	}
	return sum;
}
