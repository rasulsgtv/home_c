
#include <stdio.h>

int main(int argc, char **argv)
{
	int a, sum;
	scanf("%d",&a);
	sum=a%10;
	sum+=(a/10)%10;
	sum+=(a/100)%10;
	
	printf("%d\n", sum);
	
	return 0;
}

