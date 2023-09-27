include "lists.h"

/**
 * reserve_listint - reverse a  linked list of integer
 * @head: Pointer to the linked list head
 *
 * Return: Pointer to the new head of the rversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *before_new = NULL;
	listint_t *new = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = before_new;
		before = *head;
		*head = next;
	}
	*head = before_new;
	return (*head);
}
