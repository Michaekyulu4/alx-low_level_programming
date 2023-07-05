#include "main.h"
/**
 * factorial - get the factorial of a number
 * @n: The number to be computed
 * Return: Factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
