#include <stdio.h>

int module(int);
int main(int argc, char **argv)
{
	int a;

	scanf("%d",&a);
	printf("%d", module(a));
	
	return 0;
}

int module (int a)
{
		if (a<0)
	{
		a = -a;
	}
	return a;
}
