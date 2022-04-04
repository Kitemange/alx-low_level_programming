#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first input string
 * @s2: second input string
 *
 * Return: returns NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, s1_l, s2_l;
	char *s;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	for (s1_l = 0; s1[s1_l] != '\0'; s1_l++)
		continue;
	for (s2_l = 0; s2[s2_l] != '\0'; s2_l++)
		continue;
	s = malloc(s1_l + s2_l + 1);

	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < s1_l)
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;

	while (i < (s1_l + s2_l))
	{
		s[i] = s1[i];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
