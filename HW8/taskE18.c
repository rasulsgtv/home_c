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
 
void count(int n)
{
	for (int i = 2; i <= 9; i++)
	{
		int count = 0;
		for (int j = 2; j <= n; j++)
		{
			if (j%i == 0)
			{
				count++;
			}
		}
		printf("%d %d",i, count);
		printf("\n");
	}
}


int main(int argc, char **argv)
{
	int n;
	scanf("%d", &n);
	count(n);
	
	return 0;
}
