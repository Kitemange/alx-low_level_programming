#include "main.h"

/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@s: string to modify.
 *
 *Return: s modified.
 */

char *string_toupper(char *s)
{
	int i;

	do
	{
		/* code */
		i++;
		if (/* condition */s[i] >= 'a' && s[i] <= 'z')
		{
			/* code */s[i] -= 32;
		}
		
	} while (/* condition */s[i] != '\0');
	return (s);
}
