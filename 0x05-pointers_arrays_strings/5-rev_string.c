#include<stdio.h>
#include "main.h"

/**
 * rev_string - reverse a string.
 *
 *@s: the string to be reversed.
 */

void rev_string(char *s)
{
	int length, i, j;
	char v1;

	for (length = 0; s[length] != '\0'; length++)
	{
		j = length - 1;
		i = 0;
		for (;i > j; i++)
		{
			/* code */
			v1 = s[i];
			s[i] = s[j];
			s[j] = v1;
			j--;
		}
	}
}
