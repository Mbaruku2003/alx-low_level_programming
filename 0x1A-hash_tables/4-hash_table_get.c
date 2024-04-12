#include "hash_tables.h"
/**
 * hash_table_get - function that retreives value associated with key
 * @ht: pointer to the hash table
 * @key: key used to retreive values
 * Return: value else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *bucket;

	if (!ht ||!key || !*key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];
	while (bucket)
	{
		if (!strcmp(key, bucket->key))
			return (bucket->value);
		bucket = bucket->next;
	}
	return (NULL);
}
