#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - reset to 98
 * @n: input value
 *
 * Description: takes a pointer to an int as parameter and updates the value
 * Return: Always (0)
 */

void reset_to_98(int *n)
{
int i;
int *j;

i = 98;
j = &i;
*n = *j;
}
