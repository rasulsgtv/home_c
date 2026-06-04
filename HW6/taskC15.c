#include <stdio.h>


int grow_up(int);

int main(int argc, char **argv)
{	
	int x;
	scanf("%d",&x);
	
	
	int y = grow_up(x);
	if (y || x==0)
	{
	printf("YES");
	}
	else
	{
	printf("NO");
	} 

	return 0;
}

int grow_up (int x)
{	
	int prev = 10;
	
	while (x>0)
	{
		int cur = x%10;
		if (cur >=prev)
		{
			return 0;
		}
		prev = cur;
		x/=10;
	}

	return 1;
}
