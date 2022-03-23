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
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		/* code */
		dest[dest_len +i] = src[i];
		dest[dest_len + i] = '\0';
	}
	return (dest);	
}
