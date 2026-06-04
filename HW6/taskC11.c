#include <stdio.h>

int nod(int , int);

int main(int argc, char **argv)
{	
	int  a, b;

	scanf("%d %d",&a, &b);
	
	nod (a,b);
	return 0;
}

int nod(int a, int b)
{
	while (b != 0)
    {
		int tmp = a%b;
		a = b;
		b = tmp;
    }
    printf("%d",a);
	return 0;
}
