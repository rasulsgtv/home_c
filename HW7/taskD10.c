#include <stdio.h> 


int is_prime (int n, int delitel)
{
	if (n==1)
	{
		return 0;
	}
	else if (delitel == n)
	{
		return 1;
	}
	else if (n%delitel == 0)
	{
		return 0;
	}
	else
	{
		return is_prime(n, delitel + 1);
	}

}

int main(int argc, char **argv) 
{ 
	int n;
	scanf("%d", &n);
	
	int y = is_prime(n, 2);

	if (y)
	{
	printf("YES");
	}
	else
	{
	printf("NO");
	} 
	return 0; 
}








