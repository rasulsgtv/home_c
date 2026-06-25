#include <stdio.h>


int main(int argc, char **argv)
{
	char letter;
	int digit;
	
	scanf("%c%d", &letter,&digit);
	
	int x = letter - 'A' + 1;
	
	int sum = x+digit;
	if (sum %2 == 0)
	{
		printf("BLACK");
	}
	else
	{
		printf("WHITE");
	}


	return 0;
}

