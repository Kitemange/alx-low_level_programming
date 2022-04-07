
#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _memcpy - copies memory
 * @dest: destination
 * @src: source
 * @n: memory size_to copy
 *
 * Return: Returns memory copied when success.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to modify
 * @old_size: memory current size
 * @new_size: memory size will have
 *
 * Return: Pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		P = malloc(new_size);
		if (p == 0)
			return (NULL);

		free(ptr);
		return (p);
	}
	if (new_size == 0 && !ptr)
	{
		free(ptr);
		return (p);
	}

	if (p == 0)
		return (NULL);

		_memcpy(p, ptr, old_size);
		free(ptr);
		return (p);
}
