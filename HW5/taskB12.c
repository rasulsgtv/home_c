#include <stdio.h>


int main(int argc, char **argv)
{	
	int n, a;
	int min, max;
	scanf("%d",&n);
	
	min = n%10;
	max = n%10;
	
	while (n != 0)
    {
		a = n%10;
		if (a<min)
		{
			min = a;
		}	
		if (a > max)
		{
			max = a;
		}
        n /= 10;
    }
    printf("%d %d",min,max);

	return 0;
}
