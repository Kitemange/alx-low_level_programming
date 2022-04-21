#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * print_list - prints elements of a list_t list.
 * @h: The list_t list.
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *h)
{
	unsigned int len = 0;


	while (h)
	{
		if (h-> str)
			printf("[%d] %s\n", h->len, h->str);
		else
			return(printf("[0] (nill)\n"));

		h = h-> next;
		len++;
	}
	return (0);
}
