#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * in an array
 * @array: array with elements
 * @size: size of the array
 * @action:  pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
