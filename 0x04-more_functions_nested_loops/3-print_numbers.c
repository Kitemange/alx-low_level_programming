#include<stdio.h>
#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Description: prints the numbers, from 0 to 9, followed by a new line
 * Return: Always (0)
 */

void print_numbers(void)
{
char i = 0;
while (/* condition */i <= 9)
{
    /* code */
_putchar(i + '0');
i++;
}
_putchar('\n');
}
