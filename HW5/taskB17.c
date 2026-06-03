#include <stdio.h>


int main(int argc, char **argv)
{	
	int a,n,i;

	scanf("%d",&n);
	

	
	for (i = 10; i <= n; i++)
	{
		int sum = 0;
		int mult = 1;
		int temp = i;
		while (temp != 0)
        {
		a = temp%10;
		sum +=a;
		mult*=a;
		
		temp/=10;
		}
	if (sum == mult)
	{
		printf("%d ",i);
	}
	}

	return 0;
}
