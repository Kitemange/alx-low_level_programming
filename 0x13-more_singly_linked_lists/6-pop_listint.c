#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head node
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	/*Linked list does not exist or the list is empty*/
	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;
	i = tmp ->n;
	/*Moving head to the next node*/
	*head = (*head) -> next;

	/*deleting the first node*/
	free(tmp);

	return (i);
}
