#include <stdio.h> 


int rec(int n)  
{ 
	
	if(n==1)  
	{
	return 1;
	}
	else
	{
		return  rec(n/2)+n%2;
	}
} 

int main(void) 
{ 
	int n;
	scanf("%d", &n);
	printf("%d",rec(n));
 
}


