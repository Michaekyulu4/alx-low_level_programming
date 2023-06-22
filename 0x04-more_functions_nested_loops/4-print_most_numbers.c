#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - check the code
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50)
		{
			continue;
		}
		if (i == 52)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
