#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 of a given index
 *
 * @index: index of the value
 * @n: pointer to the bit to be manipulated
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	mask = 1;
	mask = mask << index;
	*n = ((*n) | mask);
	return (1);
}
