
#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);
	int sum = a + b + c;
	int p = a*b*c;
	printf("%d+%d+%d=%d\n", a,b,c, sum);
	printf("%d*%d*%d=%d\n", a,b,c, p);
	
	return 0;
}

