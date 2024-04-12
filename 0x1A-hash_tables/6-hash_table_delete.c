#include "hash_tables.h"
/**
 * hash_table_delete - free hash table with its nodes
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *bucket, *au_free;
	unsigned long int i = 0;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		bucket = ht->array[i];
		while (bucket)
		{
			au_free = bucket;
			bucket = bucket->next;
			if (au_free->key)
				free(au_free->key);
			if (au_free->value)
				free(au_free->value);
			free(au_free);
		}
	}
	free(ht->array);
	free(ht);
}
