#include "lists.h"

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	register int start = 0;

	while (h != NULL)
	{
		if (h -> n)
			printf("[%i] %s\n", h -> n, h -> n);
		else
			printf("[0] (nil)\n");

		h = h -> next;
		start++;
	}
	return (start);
}
