#include<stdio.h>
#include "main.h"

/**
 * _isalpha - looks for alphabetic characters.
 *
 * return: 1,0.
 */

int _isalpha(int c)
{
if (/* condition */c >= 'a','A' && c <= 'z','Z')
{
    /* code */
return (1);
}
else
{
return (0);
}
}