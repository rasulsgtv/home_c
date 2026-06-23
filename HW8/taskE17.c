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
void Print(int *a,int n) 
{     
	for (int i = 0; i < n; i++)
	{
	printf("%d ",a[i]);     
	}
}
 
void newarr(int *a,int n)
{
	int count = 0;

	
	for (int i = 0; i < n; i++)
	{
		count = 0;
	    for (int j = 0; j < n; j++)
	    {
		if (a[j] == a[i])
		{
			count++;
		}
		}
		
		if (count == 1)
		{
			printf("%d ",a[i]);
		}
	}
}


int main(int argc, char **argv)
{
	int n =10;
	
	int a[n];
	
	input(a,n);
	newarr(a,n);
	
	return 0;
}
