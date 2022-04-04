#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: input size
 * @c: input character
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n = 0;
	char *i;

	i = (char *) malloc(size);

	if (size == 0 || i == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		/* code */
		i[n] = c;
	}
	return (i);
}
