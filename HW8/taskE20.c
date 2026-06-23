#include <stdio.h>

void Print(int *a,int n) 
{     
	for (int i = 0; i < n; i++)
	{
	printf("%d",a[i]);     
	}
}
void SwapArr(int *a, int i, int j)
{
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}
void BubbleSort(int *a, int n)
{
	int noSwap;
	for (int i = 0; i < n; i++)
	{
		noSwap = 1;
		for (int j = n-1; j > i; j--)
		{
			if (a[j-1]<a[j])
			{
				SwapArr(a,j-1,j);
				noSwap =0;
			}
		}
		if(noSwap)
		    break;
	}
}

void newarr(int *a, int len, int n)
{
	int i;
	for (i = 0; n > 0; i++, n/=10)
	{
		a[i] = n%10;
		
	}
	BubbleSort(a, i);
	Print(a, i);
}



int main(int argc, char **argv)
{
	int len = 10;
	int a[len];
	
	int n;
	scanf("%d", &n);
	
	if (n == 0)
	{
    printf("0");
    }
    else
    {
    newarr(a,len,n);
    }
	return 0;
}
