#include "lists.h"

/**
 * dlistint_len - returns the count of nodes in a doubly linked list
 * @h: pointer to the list
 *
 * Return: counts of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
