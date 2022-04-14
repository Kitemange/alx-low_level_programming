#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * Return: total sum
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list P;
	unsigned int i;

	va_start(P, n);

	for (i = 0; i < n; i++)
	{
		int a = va_arg(P, unsigned int);
		printf("%d", a);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(P);
}
