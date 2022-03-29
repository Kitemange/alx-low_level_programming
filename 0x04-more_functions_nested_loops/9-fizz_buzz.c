#include <stdio.h>

/**
 * main - prints nultplies of 3 or 5
 *
 * Description: multiples between 0 and 100
 * Return: Always(0)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		/* code */
		if (/* condition */i % 15 == 0)
		{
			/* code */
			printf("FizzBuzz ");
		}

		else if (/* condition */i % 3 == 0)
		{
			/* code */
			printf("Fizz ");
		}
		else if (/* condition */i % 5 == 0)
		{
			/* code */
			printf("Buzz ");
		}
		else
		{
			/* code */
			printf("%i ", i);
		}
	}
		return (0);
	}

