#include <stdio.h>

/**
 * main - sums nultplies of 3 or 5
 *
 * Description: multiples between 0 and 1024
 * Return: Always(0) Success
 */

int main(void)
{
	int s, e, total;

	e = 1024;
	total = 0;

	for (s = 0; s < e; s++)
	{
		if ((s % 3 == 0) || (s % 5 == 0))
		{
			total = total + s;
		}
		else
		{
			continue;
		}

	}
	printf("%d", total);
	printf("\n");

	return (0);
}
