#include "lists.h"

/**
 * add_nodeint - create a new node to a linked list beginning
 * @head: double pointer to first node in the list
 * @n: for insert data in the new node
 *
 * Return: pointer too the new node, or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
