#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: input size
 * @c: input character
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *_strdup(char *str)
{
    int i, l = 0;
    char *duplicate;

    duplicate = malloc(sizeof(char) * (l + 1));

    if (str == NULL)
        return (NULL);
        
    for (i = 0; str[i] != '\0'; i++)
    {
        duplicate[i] = str[i];
    }

    
   
    return (duplicate);
}