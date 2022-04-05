#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strdup - duplicates a string,
 * @str: input string
 *
 * Return: a pointer to newly allocated memory
 */

char *_strdup(char *str)
{
	int i = 0, l = 0;
	char *duplicate;

	duplicate = malloc(sizeof(char) * (l + 1));

	if (str == 0 || duplicate == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		duplicate[i] = str[i];
		l++;
	}
	duplicate[l] = '\0';
	return (duplicate);
}
