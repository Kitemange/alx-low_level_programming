#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including \0.
 *@src: pointer.
 *@dest: pointer.
 *Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	do
	{
		/* code */
		i++;
	} while (/* condition */dest[i] != '\0');
	for (; src[j] != '\0'; j++)
	{
		/* code */
		dest[i] = src[j];
		i++;
		j++;
	}
	if (/* condition */n > 0)
	{
		/* code */
		dest[i] ='\0';
	}
	return (dest);
}
