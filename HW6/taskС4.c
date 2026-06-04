#include <stdio.h>

int func(int);

int main(int argc, char **argv)
{
	int x;
	int max = 0;
	
	scanf("%d",&x);
	
	while (x !=0)
	{   int y = func(x);
		if (y>max)
		{
			max = y;
		}
		
		scanf("%d",&x);
	}
	printf("%d",max);
	
	return 0;
}

int func (int x)
{
	int f;
	if(x>= -2 && x <2)
	{
		f = x*x;
	}
	if (x>=2)
	{
		f = x*x+4*x+5;
	}
	if (x <-2)
	{
		f = 4;
	}
	return f;
}
