#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: program that prints the number of arguments passed into it.
 * Return: Always(0) Success
 */

int main(int argc, char *argv[])
{
	/* code */
	int i;
	printf("argc = %d\n",argc);

	for (i = 0; i < argc; i++)
		printf("argv[%d] : %s",i, argv[i]);

	return 0;
}
