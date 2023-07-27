#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - Number of elements in a list
 * @h: pointer to the list_t
 * Return: number of elments
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
