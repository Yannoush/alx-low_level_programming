#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a linked list
 * @h: is a pointer to the list_t
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t y = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		y++;
	}
	return (y);
}