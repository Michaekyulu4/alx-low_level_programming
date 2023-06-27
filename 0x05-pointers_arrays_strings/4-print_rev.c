#include "main.h"

/**
 * print_rev - A function that prints a string in reverse
 * @s: String to be printed
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	for (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; 0 > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
