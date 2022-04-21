#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints elements of a list_t list.
 * @h: The list_t list.
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *h)
{
	register int len = 0;

	while (h != NULL)
	{
		if (h -> str)
			printf("[%i] %s\n", h -> len, h -> str);
		else
			printf("[0] (nil)\n");

		h = h -> next;
		len++;
	}
	return (len);
}
