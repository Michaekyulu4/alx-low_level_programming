#include "main.h"
#include <stdio.h>

/**
 * _puts - A code that puts a string
 * @str: the string to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}