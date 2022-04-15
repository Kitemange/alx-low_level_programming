#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list j;

	va_start(j, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(j, char *);

		if (str == NULL)
		{
			printf("(nill)");
		}
		else
		{
			if (i < (n - 1) && separator != 0)
				printf("%s%s", str, separator);
			else
				printf("%s", str);
		}
	}
	va_end(j);

	printf("\n");
}
