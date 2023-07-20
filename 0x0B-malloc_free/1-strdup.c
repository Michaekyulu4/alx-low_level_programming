#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return a pointer to a new allocatted
 * space in memory also duplicate the string it holds
 * to the new space
 * @str: input string
 * Return: pointer yo the memory allocated
 */
char *_strdup(char *str)
{
	size_t i, j;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	strdout = (char *) malloc(sizeof(char) * (i + 1));

	if (strdout == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		strdout[j] = str[j];
	}
	return (strdout);
}
