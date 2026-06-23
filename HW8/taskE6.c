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

float middle_sum(int *a, int n)
{
	int i;
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		sum +=a[i];
	}
	float midsum = (float)sum/n;
	return midsum;
}


int main(int argc, char **argv)
{
	int n =12;
	int a[n];
	
	input(a,n);
	
	printf("%.2f",middle_sum(a,n));
	
	return 0;
}

