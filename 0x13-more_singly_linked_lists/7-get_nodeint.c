#include "lists.h"

/**
 * get_nodeint_at_index - print the node at index
 * @head: a pointer to linked list
 * @index: index of node
 *
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int iterator = 0;
	listint_t *tmp = head;

	while (tmp && iterator < index)
	{
		tmp = tmp->next;
		iterator++;
	}

	if (tmp)
	{
		return (tmp);
	}
	else
	{
		return (NULL);
	}
}

