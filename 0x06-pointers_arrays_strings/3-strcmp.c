#include "main.h"

/**
 * _strcmp - compare two strings.
 *@s1: string 1.
 *@s2: string 2.
 *Description: the function compares two strings
 *Return: character count
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	for (; s1[i] != '\0' && s2[i] != '\0' && j == 0; i++)
	{
		/* code */
		j = s1[i] - s2[i];
	}
	return (j);
}
