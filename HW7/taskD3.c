#include <stdio.h> 


void rec(int n)  
{ 
	if(n<10)  
	{
	printf("%d ",n); 
	}
	else
	{
		printf("%d ",n%10);
		rec(n/10);
	}
} 

int main(void) 
{ 
	int n;
	scanf("%d", &n);
	rec(n);
	return 0; 
}


