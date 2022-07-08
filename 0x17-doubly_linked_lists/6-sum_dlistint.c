#include "lists.h"

/**
 * sum_dlistint - returns sum of all integers in a doubly linked list
 * @head: pointer to the list
 *
 * Return: sum of the integers
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
