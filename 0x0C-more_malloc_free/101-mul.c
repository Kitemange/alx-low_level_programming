#include "main.h"
#include <stdlib.h>
#include <math.h>

/**
 * mul - mul two digits.
 * and value should be in log 10 form
 * 
 */
 
int mul()
{
	int a, b, p;
	if (a >= 0 && b >= 0)
	{
		p = log10(a) * log10(b);
		a++;
		b++;

		return (print("%d\n",p));
	}
	else
	{
		print("Error\n");
		exit(98);
	}
}

/**
 * _atoi_digit - convert a char to integer.
 * @x: character to convert.
 * Return: integer.
 **/

int _atoi_digit(char x)
{
	unsigned int res;

	if (x <= '9' && x >= '0')
		res = x - '0';
	return (res);
}
/**
 * print_array - print all digits of array.
 * @nb: number of elements to print.
 * @a: array of elements.
 **/
void print_array(char *a, int nb)
{
	int i = 0;

	while (a[i] == '0' && (i + 1) < nb)
	{
		i++;
	}
	for (; i < nb; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}

/**
 *main - print the multiplication of 2 numbers.
 *@argc: array length.
 *@argv: array.
 *Return: 0.
 */
int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}
