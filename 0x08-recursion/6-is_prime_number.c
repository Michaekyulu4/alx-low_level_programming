#include "main.h"

int check_prime(int, int);
/**
 * is_prime_number - prime identifier
 * @n: The number to be checked
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks for prime number
 * @n: number
 * @i: iterator
 * Return: 1 or 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
