#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - addition operator
 * @a: first int
 * @b: second int
 * Return: sum of 2 numbers
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - subtraction operator
 * @a: first int
 * @b: second int
 * Return: difference of 2 numbers
 */
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - product operator
 * @a: first int
 * @b: second int
 * Return: product of 2 numbers
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - division operator
 * @a: first int
 * @b: second int
 * Return: division of 2 numbers
 */
int op_div(int a, int b)
{
    /*user tries to divide / by 0 */
    if (b == 0)
    {
        printf("Error\n");
        exit (100);
    }
    return (a / b);
}

/**
 * op_mod - remainder of the division
 * @a: first int
 * @b: second int
 * Return: remainder of the division of 2 numbers
 */
int op_mod(int a, int b)
{
    /*user tries to divide % by 0 */
    if (b == 0)
    {
        printf("Error\n");
        exit (100);
    }
    return (a % b);
}
