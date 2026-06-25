#include <stdio.h>


void change_max_min(int size, int a[])
{
	int min = a[0];
	int max = a[0];
	
	int min_idx;
	int max_idx;
	
	if (a[0] < a[1])
	{
		min = a[0];
		min_idx = 0;
		
		max=a[1];
		max_idx = 1;
	}
	else
	{
		min = a[1];
		min_idx = 1;
		
		max=a[0];
		max_idx = 0;
	}
	
	for (int i = 2; i < size; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			max_idx = i;
		}
		if (a[i] < min)
		{
			min = a[i];
			min_idx = i;
		}
	}
	int tmp = a[min_idx];
	a[min_idx] = a[max_idx];
	a[max_idx] = tmp;
}


//~ int main(int argc, char **argv)
//~ {
	//~ int n = 30;
	//~ int a[n];
	


	//~ return 0;
//~ }

