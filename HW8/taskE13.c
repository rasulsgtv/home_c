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
 
int newarr(int *a, int *arr,int n)
{
	int k =0;
	
	for (int i = 0; i < n; i++)
	{
		if((a[i] / 10) % 10 == 0)
		{
			arr[k] = a[i];
			k++;
		}
	}
	return k;
}


int main(int argc, char **argv)
{
	int n =10;
	int a[n];
	int arr[10];
	
	input(a,n);
	int k = newarr(a,arr,n);
	
	Print(arr,k);
	
	return 0;
}

