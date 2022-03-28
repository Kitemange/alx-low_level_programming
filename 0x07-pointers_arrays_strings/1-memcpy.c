#include <string.h>
#include "main.h"

/**
 * _memset - fill memory
 * @dest: string1
 * @src: string2
 * @n: input size
 *
 * Description: function that copies memory area
 * Return: returns the memory area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		/* code */
		dest[j] = src[j];
	}
return (dest);
}
