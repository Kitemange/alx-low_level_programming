#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to head
 * Return: address of head of list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *n = NULL;/*Variable declaration*/

	if (!head || !(*head))/*is it null or pointing to a null*/
		return (*head);

	n = (*head)->next;

	while (n->next)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}
	if (n)
		n->next = p;

	return (*head);
}
