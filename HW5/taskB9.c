#include <stdio.h>


int main(int argc, char **argv)
{	
	int n;
	int f =1;
	scanf("%d",&n);
	
	if (n < 0)
    n = -n;
    
	while (n != 0)
    {
        if ((n % 10)%2 != 0)
        {
           f = 0;
           break;
        }
        n /= 10;
    }
    if (f)
	{
	printf("YES");
	}
	else
	{
	printf("NO");
	}  
	return 0;
}
