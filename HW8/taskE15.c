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
 
void split(int *a, int *pos, int *neg,int n, int *p, int *m)
{

	for (int i = 0; i < n; i++)
	{
		if(a[i] > 0)
		{
			pos[*p] = a[i];
			(*p)++;
		}
		else if (a[i] < 0)
		{
			neg[*m] = a[i];
			(*m)++;
		}	
		else
		{
			continue;
		}
	}
}


int main(int argc, char **argv)
{
	int n =10;
	
	int a[n];
	int pos[10];
	int neg[10];
	
	int p = 0;
	int m = 0;
	
	input(a,n);
	
	split(a, pos, neg,n, &p, &m);
	
	Print(pos,p);
	Print(neg,m);
	
	return 0;
}

