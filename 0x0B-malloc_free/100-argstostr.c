#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argrostr - concatenates all the arguments
 * @ac: input parameter.
 * @av: input parameter.
 * 
 * return: nothing. 
 */

char *argstostr(int ac, char **av)
{
    int i, len = 1;
    char *str;

    if (ac == 0 || av == 0)
        return (NULL);
    
    for (i = 0; i < ac; i++)
    {
        len += strlen(av[i]);
    }
    str = malloc(sizeof(char)*len);
    str[0] = '\0';

    for (i = 1; i < ac; i++)
    {
        strcat(str, av[i]);
    }
    if (str[i] != '\0')
    {
        return (str[i]);
    }
    else
    {
        return (NULL);
    }
    free(str);
}