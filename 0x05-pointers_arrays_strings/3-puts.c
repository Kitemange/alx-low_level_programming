#include "main.h"
#include<stdio.h>
int puts(const char *str);

/**
 * _puts - put string
 * @str: first parameter
 *
 * Description: prints a string
 * Return: Alwalys (0)
 */

void _puts(char *str)
{
	int i = 'a';

	while (str[i] != '\0')
	{
		puts(str);
		str++;
	}
}
