#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strncpy - copies a string.
 *@src: pointer.
 *@dest: pointer.
 *@n : integer.
 *Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]  != '\0'; i++)
	{
		/* code */
		dest[i] = src[i];

		for (; i < n; i++)
		{
			/* code */
			dest[i] = '\0';
		}
	}
	
	return (dest);
}
