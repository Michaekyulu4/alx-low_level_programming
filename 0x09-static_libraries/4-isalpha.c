#include "main.h"
/**
 * _isalpha - check for alphabets
 * @c: to be checked
 * Return: 1 (Alpha) 0 (!Alpha)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
