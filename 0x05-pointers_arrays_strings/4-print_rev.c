#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * print_rev - reverse string
 * @s: string in reverse
 *
 * Description: prints a string in reverse
 * Return: Alwalys (0)
 */

void print_rev(char *s)
{
	int left, len, i;

	len = 0;
	left = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		len = i;
	}
	for (; len >= left; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
