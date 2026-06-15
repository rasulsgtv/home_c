#include <stdio.h>


int max_find(int max)
{
	int x = 0;
	scanf("%d",&x);
	
	if(x == 0)	
	{
		return max;
	}
	else if (x > max)
	{
		max = x;
	}
	return max_find(max);
}	


int main(int argc, char **argv)
{	
	int max;
    scanf("%d", &max);
    printf("%d",max_find(max));

	return 0;
}


