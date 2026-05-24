
#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);
	
	if (a>b && a>c)
	{
		printf("%d\n", a);
	}
	if (b>a && b>c)
	{
		printf("%d\n", b);
	}
	if (c>a && c>b)
	{
		printf("%d\n", c);
	}
	if (a == 0 && b == 0 && c == 0)	
	{
		printf("%d\n", a);
	}
	return 0;
}

