#include "main.h"
#include <stdio.h>
/**
 * _isupper - Code to check for upper case alphabets
 * @c: The value to be checked
 *
 * Return: 1 (upper) 0 (not upper)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
