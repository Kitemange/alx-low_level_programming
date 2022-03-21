#include<stdio.h>
#include "main.h"

/**
 * swap_int - swap 2 values.
 * @a: first_value
 * @b: second_value
 *
 *description :function that swaps the values of two integers.
 * return: always (0).
 */


void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}
