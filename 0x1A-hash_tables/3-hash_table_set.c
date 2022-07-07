#include "hash_tables.h"
/**
 * hash_table_set - a function to add an elements in the hash table
 * @ht: it is the hash table
 * @key: is the key
 * @value: this is the of the key
 * Return: an int 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index, i;
	char *new_value;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			new_value = strdup(value);
			free(ht->array[i]->value);
			ht->array[i]->value = new_value;
			free(new_value);
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_table_t) * 1);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
