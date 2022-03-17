#include "main.h"

/**
 * print_most_numbers - print most numbers
 *
 * Description: prints the numbers, from 0 to 9, followed by a new line
 * Return: Alaways (0)
 */

void print_most_numbers(void)
{
int i;

i = 0;
while (/* condition */i <= 9)
{
    /* code */
if (i != 2 && i != 4)
{
    /* code */
_putchar(i + '0');
}
i++;
}
_putchar('\n');
}
