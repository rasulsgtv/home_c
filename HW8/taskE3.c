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
	int min = a[0],i;
	for (i = 1; i < n; i++)
	{
		if( min > a[i])
		{
			min = a[i];
		}
	}
	return min;
}
int Posmin(int *a, int n)
{
	int pos = 0;
	int min = a[0], i;
	for (i = 1; i < n; i++)
	{
		if( min > a[i])
		{
			min = a[i];
			pos = i;
		}
	}
	return pos+1;
}
int max(int *a, int n)
{
	int max = a[0],i;
	for (i = 1; i < n; i++)
	{
		if( max < a[i])
		{
			max = a[i];
		}
	}
	return max;
}
int Posmax(int *a, int n)
{
	int pos =0;
	int max = a[0],i;
	for (i = 1; i < n; i++)
	{
		if( max < a[i])
		{
			max = a[i];
			pos = i;
		}
	}
	return pos+1;
}
int main(int argc, char **argv)
{
	int n =10;
	int a[n];
	
	input(a,n);
	
	printf("%d ",Posmax(a,n));
	printf("%d ",max(a,n));
	printf("%d ",Posmin(a,n));
	printf("%d ",min(a,n));
	
	return 0;
}

