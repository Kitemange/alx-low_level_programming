#include "main.h"
#include<stdio.h>

/**
 * _puts - put string
 * @str: first parameter
 *
 * Description: prints a string
 * Return: Alwalys (0)
 */

void _puts(char *str)
{
	int i;
	while (str[i] != '\0')
	{
		puts(i);
		str++;
	}
}
