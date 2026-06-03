#include <stdio.h>


int main(int argc, char **argv)
{	
	int a;
	scanf("%d",&a);
	int sum = 0;

    for(; a > 0; a /= 10) 
    {
    sum += a % 10;
    }
    
	printf("%d\n",sum);

	return 0;
}
