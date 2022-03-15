#include<stdio.h>
#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: function.
 * 
 * return: value,success.
 *  
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
return (1);
}
else
{
    /* code */
_putchar('-');
return (1);
}
}