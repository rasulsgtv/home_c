#include <stdio.h>


int is_prime(int);

int main(int argc, char **argv)
{	
	int x;
	scanf("%d",&x);
	
	
	int y = is_prime(x);
	if (y)
	{
	printf("YES");
	}
	else
	{
	printf("NO");
	} 

	return 0;
}


int is_prime (int x)
{	
	
	if (x <=1)
	{
		return 0;
	}
	else
	{
		for (int i = 2; i < x-1; i++)
		{
			if (x%i ==0)	
			{
				return 0;
			}
		}
		return 1;
	}
}
