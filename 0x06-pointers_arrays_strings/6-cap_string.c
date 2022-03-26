#include "main.h"

/**
 *cap_string - capitalizes all words of a string.
 *@s: string to use.
 *
 *Return: string.
 */

char *cap_string(char *s)
{
	int i = 0;

	while (/* condition */s[i] != '\0')
	{
		/* code */
		if (/* condition */s[i] == ',' || s[i] == ';' || s[i] == '.'
						|| s[i] == '!' || s[i] == '?' || s[i] == '"'
						|| s[i] == '(' || s[i] == ')' || s[i] == '{'
						|| s[i] == '}' || s[i] == ' ' || s[i] == '\t'
						|| s[i] == '\n')
		{
			/* code */
			if (/* condition */s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
			/* code */
			s[i + 1] -= 32;
			}
		}
	i++;

	}

	return (s);
}
