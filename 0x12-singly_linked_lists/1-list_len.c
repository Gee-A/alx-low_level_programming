#include "lists.h"

/**
 * list_len - returns then number of elemtns in a list
 * @h: singly linked list
 * Return: number of elemtns in the list.
 */

size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
