#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_char - function that prints character
 * @argptr: argument list pointer to string to be printed
 */

void print_char(va_list argptr)
{
	char ch;

	ch = va_arg(argptr, int);
	printf("%c", ch);
}

/**
 * print_int - function that prints integer
 *  * @argptr: argument list pointer to string to be printed
 */

void print_int(va_list argptr)
{
	int num_i;

	num_i = va_arg(argptr, int);
	printf("%i", num_i);
}

/**
 * print_float - function that prints a float
 *  * @argptr: argument list pointer to string to be printed
*/

void print_float(va_list argptr)
{
	float num_f;

	num_f = va_arg(argptr, double);
	printf("%f", num_f);
}

/**
 * print_string - function that prints string
 *  * @argptr: argument list pointer to string to be printed
 */

void print_string(va_list argptr)
{
	char *str;

	str = va_arg(argptr, char*);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * @...: number of arguments
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list all;
	int i, j;
	char *z = "";

	/*struct declaration*/
	prints_t list[] = {
		{"c",print_char},
		{"i",print_int},
		{"f",print_float},
		{"s",print_string}
	};

	va_start(all, format);

	i = 0;
	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (list[j].notation[0] == format[i / 4])
		{
			printf("%s",z);
			list[j].print_dType(all);
			z = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(all);
}
