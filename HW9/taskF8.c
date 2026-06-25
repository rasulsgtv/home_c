#include <stdio.h>

 
int main(int argc, char **argv)
{
	int x;
	scanf("%d", &x);
	int min, max;
	min = max = x;
	int sum = x;
	
	while(scanf("%d", &x) == 1 && x!=0)
	{
		sum +=x;
		
		if (x<min)
		{
			min = x;
		}
		if (x>max)
		{
			max = x;
		}
	}
	int exp = ((min+max)*(max-min+1))/2;
	int mis = exp - sum;
	
	printf("%d",mis);
	

	return 0;
}

