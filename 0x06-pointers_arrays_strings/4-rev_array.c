#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: first input
 * @n: number of elemets
 *
 * Description: reverses the content of an array of integers
 * Return: always (0)
 */

void reverse_array(int *a, int n)
{
	int f, l,  tmp;

	f = 0;
	l = n - 1;

	while (f < n / 2)
	{
		tmp = a[f];
		a[f] = a[l];
		a[l] = tmp;
		f++;
		l--;
	}
}
