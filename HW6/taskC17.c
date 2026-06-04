#include <stdio.h>


int is_happy_number(int);

int main(int argc, char **argv)
{	
	int x;
	scanf("%d",&x);
	
	if (is_happy_number(x))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0;
}


int is_happy_number (int x)
{			
	int a;
	int sum = 0;
	int mult = 1;
	int temp = x;
	
	while (temp != 0)
	{
		a = temp%10;
		sum +=a;
		mult*=a;
		
		temp/=10;
	}
	if (sum == mult)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
