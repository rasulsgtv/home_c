#include <stdio.h>



void swap_negmax_last(int size, int a[])
{
    int idx = -1;
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
        return;
    for (int i = idx + 1; i < size; i++)
    {
        if (a[i] < 0 && a[i] > a[idx])
        {
            idx = i;
        }
    }

    int temp = a[idx];
    a[idx] = a[size - 1];
    a[size - 1] = temp;
}

//~ int main(int argc, char **argv)
//~ {


	//~ return 0;
//~ }

