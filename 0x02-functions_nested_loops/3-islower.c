#include "main.h"
/**
 * _islower - check lower case
 * @c: Character to be checked
 * Return: 1 (Islower) 0 (!lower)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
