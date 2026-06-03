#include <stdio.h>


int main(int argc, char **argv)
{	
	int n,count;
	scanf("%d",&n);
	count = 0;
	
	if (n < 0)
    n = -n;

	while (n != 0)
    {
        if (n % 10 == 9)
        {
            count++;
        }
        n /= 10;
    }

    if (count == 1)
    {
        printf("YES\n");
	}
    else
    {
		printf("NO\n");
	}
        
	return 0;
}
