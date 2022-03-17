#include<stdio.h>
#include "main.h"

/**
 * void: check_digit.
 * print_numbers -prints digits 0-9.
 * 
 * return - 1,0.
 * 
 */

void print_numbers(void)
{
int i = 0;
while (/* condition */i <= 9)
{
    /* code */
_putchar(i + '0');
i++;
}
_putchar('\n');
}
