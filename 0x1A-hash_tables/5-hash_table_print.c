#include "hash_tables.h"
/**
 * hash_table_print - function to print the key:value
 * @ht: pointer of the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j = 0;
	hash_node_t *bucket;
	int notended = 0;

	if (!ht)
		return;
	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		bucket = ht->array[j];
		while (bucket)
		{
			if (notended)
				printf(", ");
			printf("'%s': '%s'", bucket->key, bucket->value);
			notended = 1;
			bucket = bucket->next;
		}
	}
	printf("}\n");
}
