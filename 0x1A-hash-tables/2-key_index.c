#include "hash_tables.h"

/**
 * key_index - returns the index of a key using the hash_djb2 algorithm
 * @key: key from which index is formed
 * @size: size of the array (i.e no of hash_node created in hash_table)
 * 
 * Return: index at which the key/value pair should be stored in the array
 * of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}