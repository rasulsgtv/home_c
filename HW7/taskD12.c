#include <stdio.h> 


void rec(int n, int k, int count)  
{ 
	if (n==0)
	{
		return;
	}
	printf("%d ", k);
	if (count >1)
	{
		rec(n-1,k,count-1);
	}
	else
	{
		rec(n-1,k+1,k+1);
	}
} 

int main(void) 
{ 
	int k = 1, count = 1;
	int n;
	scanf("%d", &n);
	rec(n, k, count);

}


