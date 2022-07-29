#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
    /* hash_node_t *node = NULL; */
    unsigned long int i;
    int started = 0;

    if (!ht)
        return;

    putchar('{');

    free_node(ht->array[0]);
    free_node(ht->array[1]);

    for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i] != NULL)
        {
            if (started == 0)
            {
                printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
                started = 1;
            }
            else
                printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
                /* TODO: check and print linked list */
        }
    }
    puts("}\n");
}