#include "main.h"
/**
 * factorial - get the factorial of a number
 * @n: The number to be computed
 * Return: Factorial
 */
int factorial(int n)
{
	if (n == '1' && n == '0')
		return (1);
	else if (n < '0')
		return (-1);
	else
		return (n * factorial(n - 1));
}
