#include <stdio.h>

 
int sumofarr(int n, int m, int a[n][m], int sum_middle)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] > 0 && a[i][j] > sum_middle)
			{
				count++;
			}
		}
	}
	return count;
}

int trace_matrix(int n, int a[n][n])
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i][i];
    }

    return sum/n;
}

int main(int argc, char **argv)
{
	int n = 5;
	int m = 5;
	int a[n][m];
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	int sum_middle = trace_matrix(n,a);

	printf("%d",sumofarr(n,m,a, sum_middle));

	return 0;
}

