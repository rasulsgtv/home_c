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
int min(int *a, int n)
{
	int min = a[0];
	for (int i = 0; i < n; i++)
	{
		if( min > a[i])
		{
			min = a[i];
		}
	}
	return min;
}
int main(int argc, char **argv)
{
	int n =5;
	int a[n];
	
	input(a,n);
	
	printf("%d ",min(a,n));
	
	return 0;
}

