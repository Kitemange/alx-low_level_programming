#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */

int _strlen(char *s)
{
	char *p = s;

	while (*s)
	{
		s++;
	}
	return (s - p);
}


/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: copied string
 */

char *_strdup(char *str)
{
	int i, len;
	char *copy;

	if (!str)
		return (NULL);
	len = _strlen(str);
	copy = malloc(sizeof(char) * len + 1);
	if (!copy)
		return (NULL);
	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[i] = 0;
	return (copy);
}


/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: malloced dog_t
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	char *i, *j;
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (!new_dog || !name || !owner)
		return (NULL);

	i = malloc(_strlen(name) + 1);
	if (!i)
		return (free(new_dog), NULL);
	i = _strdup(name);
	new_dog->name = i;
	j = malloc(_strlen(owner) + 1);
	if (!j)
		return (free(new_dog->name), free(new_dog), NULL);
	j = _strdup(owner);
	new_dog->owner = j;
	new_dog->age = age;
	return (new_dog);
}
