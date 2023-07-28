#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - sum of two numbers
 * @a: first number
 * @b: second number
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: first number
 * @b: second number
 * Return: Difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - divide two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The division of 2 numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mul - multiple two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The product of 2 numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - reminder of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The reminder of 2 numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
