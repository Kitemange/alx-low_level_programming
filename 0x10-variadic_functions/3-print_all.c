#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_char - function that prints character
 */

void print_char(va_list argptr)
{
	char ch;

	ch = va_arg(argptr, int);
	printf("%c", ch);
}

/**
 * print_int - function that prints integer
 */

void print_int(va_list argptr)
{
	int num1;

	num1 = va_arg(argptr, int);
	printf("%i", num1);
}

/**
 * print_float - function that prints a float
*/

void print_float(va_list argptr)
{
	float numf;

	numf = va_arg(argptr, double);
	printf("%f", numf);
}

/**
 * print_string - function that prints string
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
	unsigned int i, j;
	va_list all;
	char *z = 0;

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