#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a dlistint_t list
 * @head: node with the pointer to the previous equals to NULL
 * @n: integer to be added.
 *
 * Return: address of the new element, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
