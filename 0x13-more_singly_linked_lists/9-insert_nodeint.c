#include "lists.h"

/**
 * insert_nodeint_at_index - create a new node
 * @head: is a pointer to node list
 * @idx: is a iindex of new node added
 * @n: data insert in the new node
 *
 * Return: a pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned  int iterator;
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (iterator = 0; tmp && iterator < idx; iterator++)
	{
		if (iterator == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
