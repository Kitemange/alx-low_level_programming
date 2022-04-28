#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)/*Error*/
		return (-1);
		/*Use bitwise OR to check value returned by the left shift*/
		*n &= ~(1 << index);
	return (1);
}
