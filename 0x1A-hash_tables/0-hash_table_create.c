#include "hash_tables.h"
/**
 * hash_table_create - a function to create a hash table
 * @size: this is the table should have
 * Return: it returns an address of the table in memory
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;
	unsigned long int i;

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);

	htable->size = size;
	htable->array = malloc(htable->size * sizeof(hash_node_t *));
	if (!htable->array)
	{
		return (NULL);
	}



	for (i = 0; i <  htable->size; i++)
	{
		htable->array[i] = NULL;
	}
	return (htable);
}
