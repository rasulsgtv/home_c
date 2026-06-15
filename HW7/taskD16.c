#include <stdio.h>


int is2pow(int n)
{
	if (n ==1)
	{
		return 1;
	}
	else if (n%2 != 0)
	{
		return 0;
	}
	else
	{
		return is2pow(n/2);
	}
}

int main(int argc, char **argv)
{	
	int n;
    scanf("%d", &n);
    if (is2pow(n))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}


