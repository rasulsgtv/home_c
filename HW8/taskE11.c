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

void BubbleSort(int* a,int n) 
{     
	int noSwap;
	for (int i = 0; i < n; i++)     
	{         
		noSwap = 1;         
		for (int j = n-1; j > i; j--)         
		{                      
			if(a[j-1]%10>a[j]%10)             
			{                    
				Swap(a,j-1,j);                 
				noSwap = 0;            
			}         
		}              
		 if(noSwap)
		      break;     
	} 
} 


int main(int argc, char **argv)
{
	int n =10;
	int a[n];
	
	input(a,n);
	BubbleSort(a, n);
	Print(a,n);
	
	
	return 0;
}

