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
	int l, i, *d, *e, t;

	l = str_len(s);
	d = s;
	e = s;

	for (i = 0; i < l; i++)
	e++;

	for (i = 0; i < l/2; i++)
	{
		/* code */
		t = *e;
		*e = *d;
		*d = t;

		s++;
		e--;
	}
}