#include<stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - alphabet in lowercase, followed by new line.
 *
 * Return: no return value
 */
void print_alphabet_x10(void);
int main(void)
{
    print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void)
{
char al = 'a';

for (al = 'a'; al <= 'z'; al++)
{
    /* code */
putchar(al);
}
putchar('\n');

}
