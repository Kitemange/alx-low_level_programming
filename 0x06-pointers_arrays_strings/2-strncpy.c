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
	int i = 0, j = 0;

	while (/* condition */n > j)
	{
		/* code */
		if (/* condition */src[j] == '\0')
		{
			/* code */
			for (; j < n; j++)
			{
				/* code */
				dest[i] = '\0';
				i++;
			}
		}
		else
		{
			/* code */
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	return (dest);
}