#include <stdio.h>


void rec(int n)
{
	if (n == 0)
	{
		return;
	}
	rec(n/10);
	printf("%d ",n%10);
}


int main(int argc, char **argv)
{
	int n;
	scanf("%d", &n);
	if (n == 0)
	{
    printf("0");
    }
    else
    {
    rec(n);
    }
	return 0;
}
