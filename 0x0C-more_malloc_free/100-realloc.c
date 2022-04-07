#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _memcpy - copies memory
 * @dest: destination
 * @src: source
 * @n: memory size to copy
 *
 * Return: Returns memory copied
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
 * @old_size: current memory size
 * @new_size: memory size it will now have
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
		p = malloc(new_size);
		if (p == 0)
			return (0);
		free(ptr);
		return (p);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}

	p = malloc(new_size);
	if (p == 0)
		return (0);

	_memcpy(p, ptr, old_size);
	free(ptr);
	return (p);
}
