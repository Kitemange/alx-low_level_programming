#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

size_t print_list(const list_t *h)
{
    unsigned int len = 0;
    h = h-> next;

    while (h)
    {
        if (h-> str)
            printf("[%d] %s\n", h->len, h->str);
        else
            return(printf("[0] (nill)\n"));
        
        len++;
    }
    return (0);
}
