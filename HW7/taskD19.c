#include <stdio.h>


int acounter(void)
{
	char c;
	scanf("%c", &c);
	if (c =='.')
	{
		return 0;
	}
	if (c=='a')
	{
		return 1+acounter();
	}
	else 
	{
		return acounter();
	}
}

int main(int argc, char **argv)
{	
    printf("%d",acounter ());
 
	return 0;
}


