#include<stdio.h>
#include "main.h"

/**
 * main - alphabet in lowercase, followed by new line.
 * 
 * Return: value provided
 */

void print_alphabet(void)
{
    char al = 'a';

    for ( al = 'a'; al <= 'z'; al++)
    {
        /* code */
        putchar(al);
    }
    putchar('\n');
   
}