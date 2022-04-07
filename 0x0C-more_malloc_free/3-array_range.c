#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: first intput parameter
 * @max: second input parameter
 *
 * Return: Always(0) Success
 */

int *array_range(int min, int max)
{
	unsigned int len, i = 0;
	int *p;

	if (max > min)
		len = min - max + 1;

	if (min > max || !(p = malloc(sizeof(int) * len)))
		return (NULL);
	
	else if (max == min)
		len = 2;
	
	for (; min <= max; i++)
		p[i] = min++;
	if (max == min)
		p[i] = max;

	return (p);
}