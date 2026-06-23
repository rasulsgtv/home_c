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
 
int newarr(int *a,int n)
{
	int max_count = 0;
	int count = 0;
	int result;

	
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
		if (count > max_count)
		{
			max_count = count;
			result = a[i];
		}
	}
	return result;
}


int main(int argc, char **argv)
{
	int n =10;
	
	int a[n];
	
	input(a,n);
	printf("%d", newarr(a,n));
	
	return 0;
}
