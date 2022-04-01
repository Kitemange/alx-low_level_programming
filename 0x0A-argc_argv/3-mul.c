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
	int i ,j, mul;
    mul = i * j;

	/* code */
	for (i = 0; i < argc; i++)
	{       
		i = atoi(argv[1]);
        j = atoi(argv[2]);
	}
    printf("%s\n",mul);

	return 0;
}
