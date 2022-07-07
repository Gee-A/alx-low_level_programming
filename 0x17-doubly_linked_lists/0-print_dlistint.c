#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pinter to the list
 * Return: counts of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counts = 0;

	while (h)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
		counts += 1;
	}
	return (counts);
}
