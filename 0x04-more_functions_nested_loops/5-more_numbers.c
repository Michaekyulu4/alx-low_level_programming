#include "main.h"

/**
 * more_numbers - print 10 times the numbers
 *
 * Return: Return void.
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		for (i = 1; i <= 10; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
