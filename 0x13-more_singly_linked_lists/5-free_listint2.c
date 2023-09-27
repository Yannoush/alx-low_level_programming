#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: is a second pointer to listint_t list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp2;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp2 = (*head)->next;
		free(*head);
		*head = tmp2;
	}

	*head = NULL;
}
