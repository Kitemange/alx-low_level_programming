#include<stdio.h>
#include "main.h"

/**
 * _isalpha - looks for alphabetic characters.
 *
 * return: 1,0.
 */

int _isalpha(int c)
{
for (c >= 'a'; c <= 'z'; c++)
{
if (/* condition */c >= 'A' && c >= 'Z')
{
    /* code */
return (1);
}
else
{
    /* code */
return (0);
}
putchar(1);
}
}