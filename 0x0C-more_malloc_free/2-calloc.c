#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: first input parameter
 * @size: second input parameter
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (!(p = malloc(nmemb * size)))
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}

	return (p);

}