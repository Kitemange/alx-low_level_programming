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

	for (i = 48; i <= 58; i++)
	{

		if (i == 58)
	{
		break;
	}

		putchar(i);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
