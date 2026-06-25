#include <stdio.h>

void input(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
}

void minsum(int a[], int n)
{
	int min1;
	int min2;
	
	int idx1,idx2;
	
	if (a[0] < a[1])
	{
		min1 = a[0];
		idx1 = 0;
		
		min2=a[1];
		idx2 = 1;
	}
	else
	{
		min1 = a[1];
		idx1 = 1;
		
		min2=a[0];
		idx2 = 0;
	}
	
	for (int i = 2; i < n; i++)
	{
		if (a[i] < min1)
		{
			min2 = min1;
			idx2 = idx1;
			
			min1 = a[i];
			idx1= i;
		}
		else if (a[i] < min2)
		{
			min2 = a[i];
			idx2 = i;
		}
	}
	if (idx1 < idx2)
	{
		printf("%d %d", idx1, idx2);
	}
	else
	{
		printf("%d %d", idx2, idx1);
	}
}
int main(int argc, char **argv)
{
	int n = 30;
	int a[n];
	
	input(a, n);

	minsum(a,n);

	return 0;
}

