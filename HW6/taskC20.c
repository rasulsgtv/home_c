#include <stdio.h>



int main(int argc, char **argv)
{	
	char input;
	int balance = 0;
	
	while (scanf ("%c",&input) ==1)
	{
		if (input == '.')
		{
			break;
		}
		if (input =='(')
		{
			balance++;
		}
		else
		{
			if (input == ')')
			{
				balance--;
				if ( balance <0)
				{
					printf("NO");
					return 0;
				}
			}
		}
	}
	if (balance ==0)
	{
		printf("YES");
	}
	else
	{
		if(balance >0)
		printf("NO");
	}
	return 0;
}



