#include <stdio.h>

int main(int argc, char **argv)
{
	int n = 5;
	int a[n];
	int sum = 0;
	float result;
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	result = sum/5.0;
	printf("%.3f ",result);
	
	return 0;
}

