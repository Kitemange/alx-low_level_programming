#include<stdio.h>
#include "main.h"

/**
 * rev_string - reverse a string.
 *
 *@s: the string to be reversed.
 */

void print_rev(char *s)
{
	int length, i, j;
	char v1;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
		j = length - 1;
		i = 0;
		if (j > i)
		{
			/* code */
			v1 = s[j];
			s[j] = s[i];
			s[i] = v1;
			j--;
			i++;
		}
}
