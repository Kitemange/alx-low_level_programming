#include<stdio.h>
#include "main.h"

/**
 * @c: check_digit.
 * _isdigit -prints digits 0-9.
 * 
 * return - 1,0.
 * 
 */

int _isdigit(int c)
{
if (/* condition */c >= 0 && c <= 9)
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