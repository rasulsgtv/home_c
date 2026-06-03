#include <stdio.h>


int main(int argc, char **argv)
{	
	int  n;
	int count =0;
	scanf("%d",&n);
	
	
	while (n != 0)
    {
		if (n%2 == 0)
		{
		count++;
		}
		scanf("%d",&n);

    }
    printf("%d",count);

	return 0;
}
