#include "main.h"

/**
 * print_most_numbers - print most numbers
 *
 * Description: prints the numbers, from 0 to 9, followed by a new line
 * Return: Alaways (0)
 */

void print_most_numbers(void)
{
char i = 0;
while (/* condition */i <= 9)
{
    if (/* condition */i == 2 && i == 4)
    {
        /* code */
        continue;
    }
    
    /* code */
_putchar(i + '0');
i++;
}
_putchar('\n');
}
