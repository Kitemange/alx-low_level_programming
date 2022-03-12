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

	for (i = 48; i <= 57; i++)
	{

		if (i == 57)
	{
		break;
	}

		putchar(i);
		putchar(',');
		putchar(' ');

	
	putchar('\n');

	return (0);
}
