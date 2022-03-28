#include <string.h>
#include "main.h"

/**
 * _memset - fill memory
 * @s: string1
 * @c: input size
 *
 * Description: locates a character in a string
 * Return: returns the memory area.
 */

char *_strchr(char *s, char c)
{
	while (/* condition */*s)
	{
		if (/* condition */c == *s)
		{
			return (s);
		}
		s++;
	}
	if (/* condition */!c)
	{
		return (s);
	}

	return (NULL);
}
