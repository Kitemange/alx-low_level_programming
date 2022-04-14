#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * Return: total sum
 */

int sum_them_all(const unsigned int n, ...)
{
	float sum = 0;
	unsigned int i;

	va_list list;

	va_start(list, n);



	for (i = 0; i < n; i++)
	{
		int n = va_arg(list, unsigned int);
		sum += n;
		
		if (n == 0)
			return (0);
		

	va_end(list);

	return (sum);
}
