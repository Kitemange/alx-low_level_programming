#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds all positive numbers and prints it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success
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
