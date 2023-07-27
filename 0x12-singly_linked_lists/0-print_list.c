#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - A function that prints all the contents
 * of a list
 * @h: the list
 * Return: number of nodes in h
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
