#include "main.h"
#include <stdlib.h>
/**
 * array_range - A function that creates an
 * array of integers
 * @min: Minimum value
 * @max: Maximum value
 * Return: int pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
