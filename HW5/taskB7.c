#include <stdio.h>


int main(int argc, char **argv)
{	
	int a, num, different_num;
	scanf("%d",&a);
	while (a>0)
	{
		num = a%10;
		different_num = a /10;
		while (different_num > 0)
		{
			if (num == different_num %10)
			{
				printf("YES\n");
				return 0;
			}
			different_num /= 10;
		}
		a /=10;
	}
    printf("NO");
	return 0;
}
