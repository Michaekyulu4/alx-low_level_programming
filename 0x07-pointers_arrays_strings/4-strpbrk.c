#include "main.h"
/**
 * _strpbrk - Searches for a string of any n bytes
 * @s: String
 * @accept: set of bytes to be searched
 * Return: pointer to the byte or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
