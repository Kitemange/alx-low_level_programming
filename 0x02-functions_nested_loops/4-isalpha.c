#include<stdio.h>
#include "main.h"

/**
 * _isalpha - check for alpha characters.
 *
 * Return: 1,0;
 */

int _isalpha(int c)
{
if (/* condition */c >= 'a' && c <= 'z')
{
    /* code */
return (1);
}
else if (/* condition */c >= 'A' && c <= 'Z')
{
    /* code */
return (1);
}
else
{
return (0);
}
}
