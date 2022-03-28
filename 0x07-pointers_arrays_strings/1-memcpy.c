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
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		/* code */dest[k] = src[k];

	}
return (dest);	
}