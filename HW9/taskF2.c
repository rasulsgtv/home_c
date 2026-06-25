#include <stdio.h>


void sort_even_odd (int size, int a[])
{
	int b[size];
	int k = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] %2 ==0)
		{
			b[k] = a[i];
			k++;
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (a[i] %2 !=0)
		{
			b[k] = a[i];
			k++;
		}
	}
	for (int i = 0; i < size; i++)
	{
		a[i] = b[i];
	}
	
}

//~ int main(int argc, char **argv)
//~ {

	//~ return 0;
}

