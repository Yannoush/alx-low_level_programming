#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of alinked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node,or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodeint;
	listint_t *temp = *head;

	new_nodeint = malloc(sizeof(listint_t));

	if (!new_nodeint)
		return (NULL);

	new_nodeint->n = n;
	new_nodeint->next = NULL;

	if (*head == NULL)
	{
		*head = new_nodeint;
		return (new_nodeint);
	}

	while (temp->next)

		temp = temp->next;

	temp->next = new_nodeint;

	return (new_nodeint);
}
