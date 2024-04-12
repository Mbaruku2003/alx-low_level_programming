#include "hash_tables.h"
/**
 * hash_table_set - functions that add an element to the ash table
 * @key: key to add an element
 * @ht: pointer to the hash table
 * @value: value  to be added t the hash chain
 * Return: 1 if success else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *valuescopy, *keyscopy;
	hash_node_t *bucket, *newnode;

	if (!ht || !key || !*key || !value)
		return (0);
	valuescopy = strdup(value);
	if (!valuescopy)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];
	while (bucket)
	{
		if (!strcmp(key, bucket->key))
		{
			free(bucket->value);
			bucket->value = valuescopy;
			return (1);
		}
		bucket = bucket->next;
	}
	newnode = calloc(1, sizeof(hash_node_t));
	if (newnode == NULL)
	{
		free(valuescopy);
		return (0);
	}
	keyscopy = strdup(key);
	if (!keyscopy)
		return (0);
	newnode->key = keyscopy;
	newnode->value = valuescopy;
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
