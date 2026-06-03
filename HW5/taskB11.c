#include <stdio.h>


int main(int argc, char **argv)
{	
	int n, a, b;
	int rev =0;
	scanf("%d",&n);
	
	
	while (n != 0)
    {
		a = n%10;
		b = rev*10;
		rev = b + a;
		
        n /= 10;
    }
    printf("%d",rev);

	return 0;
}
