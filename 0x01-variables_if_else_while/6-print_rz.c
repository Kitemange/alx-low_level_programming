#include <stdio.h>

/**
 * main - alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar ('\n');

	return (0);
}
