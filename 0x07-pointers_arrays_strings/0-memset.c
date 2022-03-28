#include <string.h>
#include "main.h"

/**
 * _memset - fill memory
 * @s: input string
 * @b: input character
 * @n: input size
 *
 * Description: fills memory with a constant byte
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		/* code */
		s[i] = b;
	}
return (s);	
}
