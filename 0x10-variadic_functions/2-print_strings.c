#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: character to separe numbers
 * @n: n for number input
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list P;

	va_start(P, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(P, unsigned int);

		if (str == NULL)
        {
            printf("nill");
        }
        else
        {
            if (i != (n - 1) && separator != NULL)
            {
                printf("%s", separator);
            }
            else
                printf("%s", str);           
        }		
	}
    va_end(P);

	printf("\n");
}
