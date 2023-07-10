#include "main.h"
#include <stdio.h>

/**
 * _strlen - Show the length of a string
 * @s: String
 * Return: Length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
