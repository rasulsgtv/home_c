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

void Swap4(int *a, int n)
{
	int temp[4];
	temp[0] = a[8];
	temp[1] = a[9];
	temp[2] = a[10];
	temp[3] = a[11];
	
	for (int i = 11; i > 0; i--)
	{
		a[i] = a[i-4];
	
	}
	a[0]= temp[0];
	a[1]= temp[1];
	a[2]= temp[2];
	a[3]= temp[3];
}


int main(int argc, char **argv)
{
	int n =12;
	int a[n];
	
	input(a,n);
	Swap4(a, n);
	Print(a,n);
	
	return 0;
}

