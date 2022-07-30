#include "hash_tables.h"

/**
 * hash_table_create - creates or initiatiate a hash_table
 * @size: determine the size of the array (i.e numbers of node to be created)
 *
 * Return: New hast_table and NULL if not successful.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size == 0)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);

	new->size = size;
	new->array = malloc(new->size * (size_t)sizeof(hash_node_t *));
	if (new->array == NULL)
		return (NULL);

	return (new);
}
