#include<stdio.h>
#include "main.h"
/**
 * print_sign - prints number_sign.
 *
 * @n: function.
 *
 * return: value,success.
 */

int print_sign(int n)
{
if (/* condition */n > 0)
{
    /* code */
_putchar('+');
return (1);
}
else if (/* condition */n == 0)
{
    /* code */
_putchar('0');
return (0);
}
else
{
    /* code */
_putchar('-');
return (-1);
}
}
