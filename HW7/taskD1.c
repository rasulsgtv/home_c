#include <stdio.h> 


void rec(int n)  
{ 
	if(n!=0)  
	{
	rec(n-1);     
	printf("%d ",n); 
	}
} 

int main(void) 
{ 
	int n;
	scanf("%d", &n);
	rec(n);
	return 0; 
}


