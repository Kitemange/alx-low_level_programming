#include "main.h"

/**
 *reverse_array - reverse an array.
 *@a: array.
 *@n: array's length.
 */

void reverse_array(int *a, int n)
{
    int f, l, temp;

	l = n -1;
	f = 0;
	do
	{
		/* code */
		temp = f;
		f = l;
		l = temp;
		f++;
		l--;
	} while (/* condition */f < n / 2);

}