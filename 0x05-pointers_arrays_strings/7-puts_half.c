#include "main.h"

/**
 * puts_half - prints the second half of a string.
 *@str: string to use.
 */

void puts_half(char *str)
{
	int length, n, i;

	length = 0;
	while (/* condition */ str[length] != '\0')
	{
		/* code */
		length++;
	}
	if (/* condition */length % 2 == 0)
	{
		/* code */
		i =  length / 2;
		for (n = i; n < length; n++)
		{
			/* code */
			_putchar(str[n]);
		}	
	}
	else
	{
		/* code */i = (length - 1) / 2;
		for (n = i; n < length; n++)
		{
			/* code */
			_putchar(str[n]);
		}
		
	}
	_putchar('\n');
		
}
