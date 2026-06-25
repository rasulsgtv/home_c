#include <stdio.h>


int product_digits(int num, int parity)
{
    int product = 1;

    while (num > 0)
    {
        int digit = num % 10;

        if (digit % 2 == parity)
        {
            product *= digit;
        }

        num /= 10;
    }

    return product;
}

void change_odd(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			a[i] = product_digits(a[i], 1);
		}
	}
	
}

void change_even(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			  a[i] = product_digits(a[i], 0);
		}
	}
	
}

int main(int argc, char **argv)
{
	int n = 10;
	int a[n];
	
	int count_even = 0;
	int count_odd = 0;
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			count_even++;
		}
		else
		{
			count_odd++;
		}
	}
	if (count_even > count_odd)
	{
		change_odd(a,n);
	}
	else
	{
		change_even(a,n);
	}
	
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}

