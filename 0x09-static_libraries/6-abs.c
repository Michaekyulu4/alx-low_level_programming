#include "main.h"
#include <stdio.h>

/**
 * _abs - check the code
 * @c: the number to be computed
 * Return: Return c.
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
