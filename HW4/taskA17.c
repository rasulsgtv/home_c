#include <stdio.h>

int main(int argc, char **argv)
{
	int a;
	scanf("%d",&a);
	
	if (a >=3 && a <= 5)
	{
		printf("spring");
	}
	if (a >=6 && a <=8)
	{
		printf ("summer");
	}
	
	if (a >=9 && a <=11)
	{
		printf ("autumn");
	}
	
	if (a <=2 || a ==12 )
	{
		printf ("winter");
	}
	
	return 0;
}
