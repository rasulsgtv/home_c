#include <stdio.h>

int trace_matrix(int n, int a[n][n])
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i][i];
    }

    return sum;
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

	
	printf("%d", trace_matrix(n,a));
	
	return 0;
}

