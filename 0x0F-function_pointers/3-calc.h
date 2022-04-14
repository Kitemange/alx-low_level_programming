#ifndef CALC
#define CALC

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 * @a:num1
 * @b:num2
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/*to add two values
* Return: a + b
*/
int op_add(int a, int b);

/*
* subtract two values
* Return: a - b
*/
int op_sub(int a, int b);

/*
* to multiply two values
* Return: a * b
*/
int op_mul(int a, int b);

/*
* to divide two values
* Return: a / b
*/
int op_div(int a, int b);

/*
* to give module two values
* Return: a % b
*/
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif
