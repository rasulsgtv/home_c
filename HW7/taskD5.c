#include <stdio.h> 


void rec(int n)  
{ 
	if(n<2)  
	{
	printf("%d",n); 
	}
	else
	{
		rec(n/2);
		printf("%d",n%2);
	}
} 

int main(void) 
{ 
	int n;
	scanf("%d", &n);
	rec(n);
	return 0; 
}


