#include <stdio.h>

/**
 * _puts_recursion _prints a string followed by a new line
 * @s - string
 *
 * Return: 1 on success
 * on error, return -1.
 */

void _puts_recursion(char *s)
{
	if (/* condition */*s ==  '\0')
	{
		/* code */
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
