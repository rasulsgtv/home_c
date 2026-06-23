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

int summax(int *a, int n)
{
	int max1, max2, i;
	if (a[0] > a[1])
	{
		max1=a[0];
		max2=a[1];
	}
	else
	{
		max1=a[1];
		max2=a[0];
	}
	
	for (i = 2; i < n; i++)
	{
		if( a[i] > max1)
		{
			max2 = max1;
			max1 = a[i];
		}
		else if (a[i] > max2)
		{
			max2 = a[i];
		}
	}

	return max1+max2;
}


int main(int argc, char **argv)
{
	int n =10;
	int a[n];
	
	input(a,n);
	
	printf("%d ",summax(a,n));
	
	return 0;
}

