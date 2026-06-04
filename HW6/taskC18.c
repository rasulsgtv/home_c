#include <stdio.h>


int is_digit(char);

int main(int argc, char **argv)
{	
	int count =0;
	char input;
	
	while (1)
	{
		scanf ("%c",&input);
		if (input == '.')
		{
			break;
		}
		if (is_digit(input))
		{
			count++;
		}
	}
	printf("%d", count);

	return 0;
}


int is_digit (char c)
{			
	return c >= '0' && c <='9';
}
