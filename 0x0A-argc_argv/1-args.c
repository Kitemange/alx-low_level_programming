#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: prints number of arguments
 * Return: 0 for code success
 */


int main(int argc, char *argv[])
{
	/* code */
	int i;

	for (i = 0; i < argc; i++)
		*argv[i] = *argv[i];

	printf("%d\n", (i - 1));

	return (0);
}
