#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - Evaluating random numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{

	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
last_digit = n % 10;
printf("Last digit of %d is %d and is ", n, last_digit);
	/* your code goes there */
if (last_digit > 5)
{
printf("and is greater than 5\n");
}
else if (last_digit == 0)
{
    printf("and is 0\n");
}
else if (last_digit < 6 && last_digit != 0)
{
    printf("and is less than 6 and not 0\n");
}
	return (0);
}
