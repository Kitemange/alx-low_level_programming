#include<stdio.h>
#include "main.h"

/**
 * _isdigit - 1 if c is a digit
 * @c: input value
 *
 * Description: checks for a digit (0 through 9).
 * Return: Always (0).
 */

int _isdigit(int c)
{
if (/* condition */c >= 48 && c <= 57)
{
    /* code */
return (1);
}
else
{
    /* code */
return (0);
}
}
