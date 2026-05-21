
#include <stdio.h>

int main(int argc, char **argv)
{
	int a, p;
	scanf("%d",&a);
	p=a%10;
	p*=(a/10)%10;
	p*=(a/100)%10;
	
	printf("%d\n", p);
	
	return 0;
}

