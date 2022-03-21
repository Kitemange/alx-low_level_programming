#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
    int *num;

	int x = 98;

	num = &x;
	*n = *num;
}