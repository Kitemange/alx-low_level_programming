#include "main.h"
#include <stdio.h>

/**
 * _strstr - locate string
 * @haystack: input string
 * @needle: input needles
 *
 * Description: locates a substring
 * Return: returns a pointer to the
 * beginning of the located substring, else, NULL
 */

char *_strstr(char *haystack, char *needle)
{
	   int i;
	   
	   if (!needle)
	   {
		   return (haystack);
	   }
	   while (*haystack != '\0')
	   {
		   i = 0;
		while (*haystack != *needle && *haystack != '\0')
		{
			haystack++;

		while (haystack[i] == needle[i] && haystack[i] != '\0')
		{
			i++;
		}
		if (needle[i] == '\0')
		{
			return (haystack);
		}
		}
		haystack++;
   }
    return  (0);
}