#include "lists.h"

/**
 * listint_len - print number of elem in linked lists
 * @h: linked list
 *
 * Return:number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t node_num = 0;

	while (h)
	{
		node_num++;
		h = h->next;
	}
	return (node_num);
}
