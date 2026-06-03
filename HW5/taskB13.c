#include <stdio.h>


int main(int argc, char **argv)
{	
	int n, a;
	int even =0, odd =0;
	scanf("%d",&n);
	
	
	while (n != 0)
    {
		a = n%10;
		if (a%2 ==0)
		{
			even++;
		}	
		else
		{
			odd++;
		}
        n /= 10;
    }
    printf("%d %d",even,odd);

	return 0;
}
