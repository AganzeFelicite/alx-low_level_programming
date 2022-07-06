#include "hash_tables.h"
/**
 * key_index - this a function that return an index
 * @key: is the key
 * @size: is the size of the has table
 * Return:  an index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int keys;

	keys = hash_djb2((unsigned char *)key);
	return (keys % size);
}
