#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node at the beginning
 * @head: first parameter
 * @str: second parameter
 * Return: nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));/*allocate memmory to new*/

	if (new == NULL) /*checks if new is  pointing to nulll*/
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;/*next will point to the header*/

	*head = new;/*return pointer head to new*/

	return (new);
}