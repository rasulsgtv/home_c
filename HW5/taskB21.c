#include <stdio.h>


int main(int argc, char **argv)
{	
	char c;
	scanf("%c",&c);
	
	while (c!='.')
	{
		if ('A' <=c && c <='Z')
		{
			c = c +32;
		}
		printf("%c",c);
		scanf("%c",&c);
	}

	return 0;
}
