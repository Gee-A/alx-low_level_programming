#include "hash_tables.h"

/**
 * hash_table_set - adds a hash_node to the hash_table using the key
 * @ht: hash_table contain array of hash_nodes
 * @key: key is used to generate hash index and to ensure uniqueness
 * @value: value to be added to the key position
 *
 * Return: 1 (SUCCESS), 0 (FAILED)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *head;
	int success = 0;

	if (ht && key && *key)
	{            
		size_t index = key_index((unsigned char *)key, ht->size);

		node = malloc(sizeof(hash_node_t *));
		if (!node)
			return (0);

		node->key = strdup(key);
		node->value = strdup(value);
		node->next = NULL;

		if (ht->array[index])
		{
			head = ht->array[index];
			while (head)
			{
				if (strcmp(head->key, key) == 0)
				{
					free_node(node);
					head->value = strdup(value);
					break;
				}
				else if(head->next == NULL)
				{
					head->next = node;
					break;
				}
				else
					head = head->next;
			}
		}
		else
			ht->array[index] = node;
		success = 1;
	}
	return (success);
}
