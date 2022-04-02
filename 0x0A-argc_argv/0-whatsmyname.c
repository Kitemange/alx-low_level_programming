#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints file name
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: a program that prints its name
 * Return: Always(0) Success
 */

int main(int argc, char *argv[])
{
	/* code */
	while (argc--)
	{
		/* code */
		printf("%s\n", *argv++);
	}
	return (0);
}
