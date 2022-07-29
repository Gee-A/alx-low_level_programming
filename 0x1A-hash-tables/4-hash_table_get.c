#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash_table contain array of hash_nodes
 * @key: key is used to generate hash index and to ensure uniqueness
 * 
 * Return: associated value or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    hash_node_t *node;
    unsigned long int index;

    if (!ht && !key && *key)
        return (NULL);

    index = key_index((unsigned char *)key, ht->size);
    node = ht->array[index];
    
    while(node)
    {
        if (strcmp(node->key, key) == 0)
            return (node->value);
        node = node->next;
    }
    return (NULL);
}