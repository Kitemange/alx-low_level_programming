#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - positive_or_negative
*
* Return: Always 0 (Success)
*/

int main(int n)
{

	n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	positive_or_negative(n);
	return (0);
}
