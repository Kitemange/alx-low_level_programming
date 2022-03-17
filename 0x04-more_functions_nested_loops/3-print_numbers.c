#include<stdio.h>
#include "main.h"

/**
 * void: check_digit.
 * print_numbers -prints digits 0-9.
 * Description: prints the numbers, from 0 to 9, followed by a new line
 * 
 * return - 1,0.
 * 
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
