#include <string.h>
#include "main.h"

/**
 * *_memcpy - fill memory
 * @dest: string1
 * @src: string2
 * @n: input size
 *
 * Description: function that copies memory area
 * Return: returns the memory area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *csrc = (char *)src;
	char *cdest = (char *)dest;
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		/* code */
		cdest[j] = csrc[j];
	}
return (cdest);
}
