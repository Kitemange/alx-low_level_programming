#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of a list_t list.
 * @h: The list_t list.
 * Return: The number of nodes in h.
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		/* code */
		h = h->str;
		i++;
	}
	return (i);
}
