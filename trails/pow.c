#include <stdio.h>
/*#include <math.h>*/

int power(int m, int n)
{
    int i, p;
    i =  p = 1;
    for (; i <= n; ++i)
        {
            /* code */
            p *= m;
        }
    return p;
}

/*test power function*/

int main(int i)
{
    /* code */
    for (i = 0; i < 10; i++)
    {
        /* code */
        printf("i= %d power= %d power= %d\n", i, power(2, i), power(-3, i));
    }
    return 0;
}
