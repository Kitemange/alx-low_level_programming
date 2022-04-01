#include <stdlib.h>
#include <stdio.h>

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
	int i = 0;
	/* code */
	for (; i < argc; i++)
	{
		/* code */
		printf("%s\n",argv[i]);
	}

	return 0;
}
