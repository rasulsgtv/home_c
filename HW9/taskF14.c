#include <stdio.h>

int count_bigger_abs(int n, int a[])
{
	int max = a[0];
	int count = 0;
	
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			a[i]*=(-1);
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			count++;
		}
	}
	return count;
}


//~ int main(int argc, char **argv)
//~ {
	//~ int n = 30;
	//~ int a[n];
	


	//~ return 0;
//~ }

