#include <stdio.h>

int input(int *a, int n)
{
	int i;
	for (i= 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	return i;
}
void Print(int *a,int n) 
{     
	for (int i = 0; i < n; i++)
	{
	printf("%d ",a[i]);     
	}
}

void Swap(int *a,int i,int j) 
{ 
	int temp = a[i];
	 a[i]   = a[j];
	 a[j]   = temp;
} 

void Swaphalf(int *a, int n)
{
	for (int i = 0; i < 2; i++)
	{
		Swap(a,i,3-i);
	}
	for (int i = 0; i < 2; i++)
	{
		Swap(a,4+i,7-i);
	}
	for (int i = 0; i < 2; i++)
	{
		Swap(a,8+i,11-i);
	}
}


int main(int argc, char **argv)
{
	int n =12;
	int a[n];
	
	input(a,n);
	Swaphalf(a, n);
	Print(a,n);
	
	
	return 0;
}

