#include "lists.h"

/**
 * reserve_listint - reverse a  linked list of integer
 * @head: Pointer to the linked list head
 *
 * Return: Pointer to the new head of the rversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
