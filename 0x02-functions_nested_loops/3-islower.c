#include<stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * return: always success.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
    /* code */
return (1);
}
else
{
return (0);
}
}
