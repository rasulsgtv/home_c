#include <stdio.h>


int main(int argc, char **argv)
{	
	int a;
	scanf("%d",&a);
	
	if (a <=1)
	{
		printf("NO");
	}
	else
	{
		for (int i = 2; i < a-1; i++)
		{
			if (a%i ==0)	
			{
				printf("NO");
				return 0;
			}
		}
	printf("YES");
	}
	
	return 0;
}
