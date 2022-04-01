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
	int i, k = 0;
	for ( i = 0; i < argc; i++)
	{
		if (i > 0)
		{
			/* code */
			if (/* condition */(atoi(argv[i]) == 0))
			{
				return(printf("error\n"), 1);
			}
		k +=atoi(argv[i]);
		}
	}
	printf("%d\n", k);

	return (0);
}
