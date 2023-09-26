#include "lists.h"

/**
 * print_listint - print linked list elements
 * @h: linked list of type listint_t
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node_num++;
		h = h->next;
	}
	return (node_num);
}
