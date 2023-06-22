#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check for digits
 * @c: value to be checked
 * Return: 1 (digit) 0 (notdigit)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
