#include<stdio.h>
#include "main.h"

/**
 * print_alphabet - alphabet in lowercase, followed by new line.
 *
 * Return: no return value
 */

void print_alphabet(void)
{
char al = 'a';

for (al = 'a'; al <= 'z'; al++)
{
    /* code */
putchar(al);
}
putchar('\n');

}
