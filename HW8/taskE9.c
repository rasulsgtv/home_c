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

void Swaphalf(int *a, int n)
{
	int tmp = a[11];
	for (int i = 11; i > 0; i--)
	{
		a[i]= a[i-4];
	}
	a[0] = tmp;

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

