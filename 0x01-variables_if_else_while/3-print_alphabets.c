#include <stdio.h>

/**
 * main - alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch = 'a';
char Z = 'A';

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (Z = 'A'; Z <= 'Z'; Z++)
{
putchar(Z);
}
putchar('\n');

return (0);
}
