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
	char a[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
		}
		i++;
	}

	return (s);
}