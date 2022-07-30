#include "hash_tables.h"

/**
 * free_node - frees a node
 * @hn: pointer to the node to free
 */
void free_node(hash_node_t *hn)
{
	if (hn)
	{
		free(hn->key);
		free(hn->value);
		if (hn->next)
			free_node(hn->next);
		free(hn);
	}
}

/**
 * hash_table_delete - delete a hash table
 * @ht: a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
		free_node(ht->array[i]);
	free(ht);
}
