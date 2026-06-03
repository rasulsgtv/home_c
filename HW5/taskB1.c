#include <stdio.h>


int main(int argc, char **argv)
{
Start:	

	int a;

	scanf("%d",&a);
	
	if (a<=100)
	{
		for (int i = 1; i <= a; i++)
		{
			printf("%d %d %d\n", i, i*i, i*i*i);
		}
	}
	else
	{
		goto Start;
	}
	
	return 0;
}
