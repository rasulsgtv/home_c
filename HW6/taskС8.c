#include <stdio.h>

char capital_letters(char);

int main(int argc, char **argv)
{	
	char c;
	scanf("%c",&c);
	
	capital_letters(c);

	return 0;
}

char capital_letters(char c)
{
	while (c!='.')
	{
		if ('a' <=c && c <='z')
		{
			c = c -32;
		}
		printf("%c",c);
		scanf("%c",&c);
	}
	return c;
}
