#include "lists.h"

/**
 * delete_nodeint_at_index - dlete a linked list node
 * @head: is a pointer to the elem in the list
 * @index: to delete a node
 *
 * Return: 1 or -1;
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *actu = NULL;
	unsigned int iterator = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (iterator < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		iterator++;
	}

	actu = tmp->next;
	tmp->next = actu->next;
	free(actu);

	return (1);
}
