#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int started = 0;

	if (!ht)
		return;

	putchar('{');

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
