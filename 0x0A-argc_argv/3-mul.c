#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */
int main(int argc, char const *argv[])
{
	int n;

	if (argc != 3)
	{
		return (printf("%s\n", "Error"), 1);
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", n);
	}
	return (0);
}
