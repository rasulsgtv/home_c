#include <stdio.h> 


int sum_digits(int a) 
{ 
	if (a>0)
	{
		return a%10 + sum_digits(a/10);
	}
	else
	{
		return 0;
	}
} 

int main(void) 
{ 
	int a;
	scanf("%d", &a);
	printf("%d",sum_digits(a));
	return 0; 
}


