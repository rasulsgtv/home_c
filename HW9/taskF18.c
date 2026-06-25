#include <stdio.h>

int search_max(int n,int m, int a[n][m])
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int max = a[i][0];
		
		for (int j = 1; j < m; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
			}
		}
		sum += max;
	}
	return sum;
} 

int main(int argc, char **argv)
{
	int n = 10;
	int m = 10;
	int a[n][m];
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	printf("%d",search_max(n,m,a));

	return 0;
}

