#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strcat - concatenates string .
 *@src: pointer.
 *@dest: pointer.
 *Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, l = 0;

	do{
		/* code */
		l++;
	}
	while (/* condition */dest[l] !=  '\0');
	for (i = 0; src[i] != '\0'; i++)
	{
		/* code */
		dest[l] = src[i];
		l++;
	}
	dest[l] ='\0';

	return (dest);
}
