#include <stdio.h>


int main(int argc, char **argv)
{
Start:	

	int a,b;
	int sum = 0;

	scanf("%d %d",&a,&b);
	
	if (a<=100 && b<=100)
	{
		for (int i = a; i <= b; i++)
		{
			int tmp = i*i;
			sum += tmp;
		}
		printf("%d", sum);
	}
	else
	{
		goto Start;
	}
	
	return 0;
}
