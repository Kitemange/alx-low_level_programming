#include "main.h"
#include <stdio.h>
#include<string.h>

/**
 * _puts - prints a string
 * @str: input parameter
 *
 * Description: prints a string
 */

void _puts(char *str)
{
while (/* condition */*str != '\0')
{
    /* code */
_putchar(*str);
str++;
}
_putchar('\n');
}
