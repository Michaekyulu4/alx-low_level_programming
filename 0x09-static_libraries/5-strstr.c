#include "main.h"
/**
 * _strstr - locates a subscript
 * @haystack: the string to be checked
 * @needle: the subscript to be located
 * Return: Pointer to the start of the subscript
 * or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
