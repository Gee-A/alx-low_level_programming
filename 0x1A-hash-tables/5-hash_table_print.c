#include "hash_tables.h"

/**
 * print_list - iterate through a node
 * @hn: a hash node
 * @started: represents a flags that indicates if a list print has started
 *
 * Return: @started to updated the caller function.
 */
int print_list(hash_node_t *hn, int started)
{
	while(hn)
	{
		if (started == 0)
		{
			printf("'%s': '%s'", hn->key, hn->value);
			started = 1;
		}
		else
			printf(", '%s': '%s'", hn->key, hn->value);
		hn = hn->next;
	}
	return (started);
}

/**
 * hash_table_print - prints a hash table
 * @ht: a hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	int started = 0;
	unsigned long int i;

	if (!ht)
		return;

	putchar('{');

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			started = print_list(ht->array[i], started);
	}
	puts("}\n");
}
