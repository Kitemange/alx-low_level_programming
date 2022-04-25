#include "lists.h"

/**
 * list_len - prints number of nodes
 * @h: first parameter
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;/*increament count*/
	}
	return (count);
}
