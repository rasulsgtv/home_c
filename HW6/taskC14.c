#include <stdio.h>


int sumnum(int);

int main(int argc, char **argv)
{	
	int x;
	scanf("%d",&x);
	
	if (sumnum(x)) 
	{
		printf("YES");
	}
	else
	{
	printf("NO");
	} 
	return 0;
}

int sumnum (int x)
{	
	int f =1;
	int sum = 0;
	if (x < 0)
    {
		x = -x;
    }
	while (x != 0)
    {
		sum+=x%10;
        x /= 10;
    }
    if (sum%2 != 0)
    {
      f = 0;
     }
	return f;
}
