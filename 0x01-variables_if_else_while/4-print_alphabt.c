#include <stdio.h>

/**
 * main - alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch = 'a';

for (ch = 'a'; ch <= 'z'; ch++)

if (ch == 'e' && ch == 'q')

continue;

printf("%c",ch);

return (0);
}
