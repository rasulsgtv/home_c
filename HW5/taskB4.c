#include <stdio.h>


int main(int argc, char **argv)
{	
	int a;

	scanf("%d",&a);
	if (a>999 || a<100)
	{
		printf("NO");
	}
	else 
	printf("YES");

	return 0;
}
