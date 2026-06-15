#include <stdio.h> 


int rec(int n)  
{ 
	if(n<1)  
	{
	return 0;    
	}
	return n + rec(n-1);
} 

int main(int argc, char **argv) 
{ 
	int n;
	scanf("%d", &n);
	printf("%d",rec(n));
	
	return 0; 
}


