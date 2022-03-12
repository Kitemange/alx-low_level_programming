#include <stdio.h>

/**
 * main - Print single digit numbers in the formart
 *
 * Description: Sepaeated by commas
 * Return: Always(0) Success
 */

int main(void)
{
	int i;

	for (i = 48; i < 57; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	if (i != 59)
	{
		putchar(57);
	}
	putchar('\n');

	return (0);
}
