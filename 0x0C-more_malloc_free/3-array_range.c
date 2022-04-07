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
	int len, i = 0;
	int *p;

	if (min > max)
		return (NULL);
		
	len = min - max + 1;
	p = malloc(sizeof(int) * len);
	if (!p)
		return (NULL);	
	
	for (; i < len; i++)
	{
		p[i] = min++;
	}
	
	return (p);
}