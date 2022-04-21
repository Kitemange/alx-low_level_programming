#include "lists.h"

/**
 * add_node_end - add a string at the end of the list
 * @head: a pointer to the address of the first list node
 * @str: the string to add to the list
 *
 * Return: If memory allocation fails, return NULL. Otherwise, return the
 * address of the new no
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;

	if (!head)
		return (NULL);

	if (*head)
		return (add_node_end(&(*head)->next, str));
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);


	new->str = _strdup(str);
	new->len = (_strlen(new->str));
	new->next = *head;

	*head = new;

	return (new);
}

/**
 * _strlen - counts the lenght of a string
 * @str: string to be counted
 * Return: len of a string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
