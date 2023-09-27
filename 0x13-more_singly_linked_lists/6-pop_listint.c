#include "lists.h"

/**
 * pop_listint - which deletes the head node of a linked
 * @head: is a pointer to liinked list
 *
 * Return: the data or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{

	listint_t *tmp;
	int node_num = 0;

	if (!head || !*head)
		return (0);

	node_num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (node_num);
}
