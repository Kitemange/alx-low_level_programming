#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: string of arguments in array
 * Return: 0
 */

int main(int argc, char *argv[])
{
    int a, b;
    int (*p)(int, int);

    /*number of arguments is wrong,*/
    if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

    p = get_op_func(argv[2]);
    /*the operator is none of the ones provided*/
    if (!p)
    {
        printf("Error\n");
        exit(99);
    }

    /*atoi to convert arguments to int*/
    a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%i\n", p(a, b));

    return (1);
}
