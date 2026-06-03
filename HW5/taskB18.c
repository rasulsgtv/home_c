#include <stdio.h>


int main(int argc, char **argv)
{	
	int a,b,c,n;

	scanf("%d",&n);
	
	if (n == 1)
	{
		printf("1");
	}
	if (n >=2)
	{
		printf("1 1 ");
		a = 1;
		b = 1;
		int i =3;
		while (i <= n)
		{
			c = a+b;
			printf("%d ",c);
			a = b;
			b = c;
			i++;
		}
	}

	return 0;
}
