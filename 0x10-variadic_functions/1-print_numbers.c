#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: character to separe numbers
 * @n: n for number input
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list P;

	va_start(P, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(P, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(P);
}
