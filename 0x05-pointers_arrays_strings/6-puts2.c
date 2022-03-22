#include<stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string.
 *@str: the string to use.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (/* condition */ i % 2 == 0)
		{
			/* code */
			_putchar(str[i]);
		}

	}

	_putchar('\n');
}
