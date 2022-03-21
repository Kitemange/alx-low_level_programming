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
	int l, i, *s, *e, t;

	l = str_len(s);
	s = s;
	e = s;

	for (i = 0; i < l; i++)
	e++;

	for (i = 0; i < l/2; i++)
	{
		/* code */
		t = *e;
		*e = *s;
		*s = t;

		s++;
		e--;
	}
}