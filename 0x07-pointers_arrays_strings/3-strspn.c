#include "main.h"

/**
 * _strspn - get the length of a a prefix subscript
 * @s: String to be searched
 * @accept: the prefic to be meassured
 * Return: Number of bytes from s that
 * are in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++
	}
}
