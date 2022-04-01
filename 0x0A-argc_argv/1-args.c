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
	/* code */
	int i;
	printf("argc = %d\n",argc);

	for (i = 0; i < argc; i++)
		printf("argv[%d] : %s",i, argv[i]);

	return 0;
}
