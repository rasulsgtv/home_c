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
	int count = 0;
	int found = 0;
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		count = 0;
	    for (int j = 0; j < n; j++)
	    {
		if (a[j] == a[i])
		{
			count++;
		}

	    }
	    		if (count >1)
		{
			found = 0;
			
			for (int t = 0; t < k; t++)
			{
				if (arr[t] == a[i])
				{
					found = 1;
					break;
				}
			}
			if (!found)
			{
				arr[k] = a[i];
				k++;
			}
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
