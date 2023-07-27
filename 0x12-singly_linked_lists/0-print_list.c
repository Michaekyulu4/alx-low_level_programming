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
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\, h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
