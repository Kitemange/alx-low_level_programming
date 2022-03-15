#include<stdio.h>
#include "main.h"
/**
 * print_sign - prints the sign of a num
 * @n: integer to be tested
 *
 * Description: checks signs of numbers
 * Return: Always(0)
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
