#include <stdio.h>

int input(int *a, int n)
{
	int i;
	for (i= 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	return i;
}

int sum(int *a, int n)
{
	int i;
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i]>0)
		{
			sum +=a[i];
		}
	}
	return sum;
}


int main(int argc, char **argv)
{
	int n =10;
	int a[n];
	
	input(a,n);
	
	printf("%d ",sum(a,n));
	
	return 0;
}
