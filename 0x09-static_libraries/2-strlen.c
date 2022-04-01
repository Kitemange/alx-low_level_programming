#include "main.h"
#include <stdio.h>
#include<string.h>

/**
 * _strlen - returns lenght of string
 * @s: input parameter
 *
 * Description: uses pointers
 * Return: Alawy (0)
 */
int _strlen(char *s)
{
int l, length = 0;

for (l = 0; s[l] != '\0'; l++)
{
	/* code */
	length++;
}

return (length);
}
