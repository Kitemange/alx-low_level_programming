#include<stdio.h>
#include "main.h"
/**
 * times_table - computes the absolute value of an integer
 *
 * Description: computes integer absolute value integer
 * Return: Always(0)
 */
void times_table(void)
{
int e,g,d;
for ( e = 0; e <= 9; e++)
{
    /* code */
_putchar('0');
_putchar(',');
_putchar(' ');

for (g = 0; g <= 9; g++)
{
    /* code */
d = (e * g);
if (/* condition */(d / 10) > 0)
{
    /* code */
_putchar((d / 10) + '0');
}
else
{
    /* code */

}
}
}
