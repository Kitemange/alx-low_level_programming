#include<stdio.h>
#include "main.h"
/**
 * jack_bauer - computes the absolute value of an integer
 *
 * Description: computes integer absolute value integer
 * Return: Always(0)
 */
void jack_bauer(void)
{
int i, g;

for (i = 0; i < 24; i++)
	{
for (g = 0; g < 60; g++)
{
    /* code */
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(':');
_putchar((g / 10) + '0');
_putchar((g % 10) + '0');
_putchar('\n');
}
}
}
