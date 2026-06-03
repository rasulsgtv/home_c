#include <stdio.h>


int main(int argc, char **argv)
{	
	int  a, b;

	scanf("%d %d",&a, &b);
	
	
	while (b != 0)
    {
		
		int tmp = a%b;
		a = b;
		b = tmp;


    }
    printf("%d",a);

	return 0;
}
