#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: prints all arguments it receives
 * Return: Always(0) Success
 */

int main(int argc, char *argv[])
{
	int i = 0;
	/* code */
	for (; i < argc; i++)
	{
		/* code */
		printf("%s\n", argv[i]);
	}

	return (0);
}
