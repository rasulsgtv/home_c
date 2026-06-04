#include <stdio.h>

int digit_to_num(char);

int main(int argc, char **argv)
{	
	char input;
	int sum = 0;
	
	while (scanf ("%c",&input) ==1)
	{
		if (input == '.')
		{
			break;
		}
		sum+= digit_to_num(input);
	}
	printf("%d", sum);

	return 0;
}


int digit_to_num (char c)
{			
	if (c >= '0' && c <='9')
	{
		return c -'0';
	}
	return 0;
}
