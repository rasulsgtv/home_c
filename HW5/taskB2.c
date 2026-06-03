#include <stdio.h>


int main(int argc, char **argv)
{
Start:	

	int a,b;

	scanf("%d %d",&a,&b);
	
	if (a<=100 && b<=100)
	{
		for (int i = a; i <= b; i++)
		{
			printf("%d ", i*i);
		}
	}
	else
	{
		goto Start;
	}
	
	return 0;
}
