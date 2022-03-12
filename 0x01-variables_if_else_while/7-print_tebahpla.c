#include <stdio.h>

/**
 * main - alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch = 'z';

while (/* condition */ch >= 'a')
{
    /* code */
putchar(ch);
ch--;
}

putchar('\n');

return (0);
}
