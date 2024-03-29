#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - Square root of a natural number
 * @n: the number to be sqrt
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}


/**
 * _sqrt - recursive square root
 * @n: number
 * @i: iterator
 * Return: a number
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
