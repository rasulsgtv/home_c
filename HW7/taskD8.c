#include <stdio.h> 


void rec(int a, int b)  
{ 
	if( a<b && a!=b)  
	{
	rec(a, b-1); 
	printf("%d ",b); 
	}
	else if(a==b)
	{
		printf("%d ",a);
	}
	else if(a>b)
	{
		printf("%d ",a); 
		rec(a-1, b);
	}
} 

int main(void) 
{ 
	int a,b;
	scanf("%d %d", &a, &b);
	rec(a,b);
	return 0; 
}


