#include <stdio.h>


int main(int argc, char **argv)
{	
	int n;
	int f =0;
	scanf("%d",&n);
	
	if (n < 0)
    n = -n;
    
	while (n != 0)
    {
        if ((n % 10) > (n %100/10))
        {
           f = 1;
           break;
        }
        else break;
        n /= 10;
    }
    if (f || n==0)
	{
	printf("YES");
	}
	else
	{
	printf("NO");
	}  
	return 0;
}
