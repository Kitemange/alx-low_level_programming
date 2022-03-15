#include<stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - alphabet in lowercase, followed by new line.
 *
 * Return: no return value
 */

void print_alphabet_x10(void)
{
int count = 0;
char al = 'a';

for (count = 0; count < 10; count++)
{
    /* code */
for (al = 'a'; al <= 'z'; al++)
{
    /* code */
putchar(al);
}
putchar('\n');
}
}
