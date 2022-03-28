#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - search a string
 * @s: input string
 * @accept: accepted string
 *
 * Description: searches a string for any of a set of bytes
 * Return: resturns accepted string
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, p, f;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	p = i;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[i] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if(j < p)
				{
					p = j;
					f = i;
				}
				
			}
			
		}
		
	}
	if (f == 1  )
	{
		return &s[p];
	}
	else
	{
		return ('\0');
	}
}