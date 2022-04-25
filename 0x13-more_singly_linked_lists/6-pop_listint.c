#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to head pointer
 * Return: none
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
