#include <stdio.h>

//~ int input(int *a, int n)
//~ {
	//~ int i;
	//~ for (i= 0; i < n; i++)
	//~ {
		//~ scanf("%d",&a[i]);
	//~ }
	//~ return i;
//~ }
//~ void Print(int *a,int n) 
//~ {     
	//~ for (int i = 0; i < n; i++)
	//~ {
	//~ printf("%d ",a[i]);     
	//~ }
//~ }

void sort_array(int size, int a[])
{
	int noSwap;
	for (int i = 0; i < size; i++)     
	{         
		noSwap = 1;         
		for (int j = size-1; j > i; j--)         
		{                      
			if(a[j-1]>a[j])             
			{
				int temp = a[j-1];
				a[j-1]   = a[j];
				a[j]   = temp;                    
				noSwap = 0;            
			}         
		}              
		 if(noSwap)
		      break;     
	} 
	
}


//~ int main(int argc, char **argv)
//~ {
	//~ int n =10;
	//~ int a[n];
	
	//~ input(a,n);
	//~ sort_array(n, a);
	//~ Print(a,n);

	//~ return 0;
}

