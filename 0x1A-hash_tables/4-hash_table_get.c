#include "hash_tables.h"
/**
 * hash_table_get - this a function to retreive data
 * @ht: this is the hash table
 * @key: this is the key of the node
 * Return: a value (char *)
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	char *value;

	for(i = 0; i < ht->size; i++)
	{
		if(strcmp(ht->array[i]->key, key) == 0)
		{
			value = ht->array[i]->value;
			return (value);
		}

		else
			return (NULL);
	}
}
