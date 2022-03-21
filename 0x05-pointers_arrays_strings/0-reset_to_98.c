#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
    int i = 0;
    n = &i;
    _putchar('i');

    *n = 98;
    _putchar('i');
}