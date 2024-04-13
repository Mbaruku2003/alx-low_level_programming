#include "hash_tables.h"
/**
 * sorted_list - function for sorting a new node
 * @ht: pointer to a sortd hash table
 * @new_node: a new noe to insert
 */
void sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *sbucket = ht->shead;

	if (sbucket == NULL)
	{
		ht->shead = ht->stail = new_node;
		new_node->snext = new_node->sprev = NULL;
		return;
	}
	do {
		if (strcmp(new_node->key, sbucket->key) < 0)
		{
			new_node->snext = sbucket;
			new_node->sprev = sbucket->sprev;
			if (!sbucket->sprev)
				ht->shead = new_node;
			else
				sbucket->sprev->snext = new_node;
			sbucket->sprev = new_node;
			return;
		}
		sbucket = sbucket->snext;
	}
	while (sbucket);
	{
	}
	new_node->sprev = ht->stail;
	new_node->snext = ht->stail->snext;
	ht->stail->snext = new_node;
	ht->stail = new_node;
}
/**
 * shash_table_create - creates a sorted hash_table
 * @size: size of the hash table
 * Return: ponter to the hashtable
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;

	if (size == 0)
		return (NULL);
	table = calloc(1, sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(size, sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
/**
 * shash_table_set - adds elements to the sorted hash table
 * @ht: pointer ro the sorted hash table
 * @key: key to be added as an element
 * @value: value to add the element
 * Return: 1 if it succeeeds else 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *valuescopy, *keyscopy;
	shash_node_t *bucket, *newnode;

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
	newnode = calloc(1, sizeof(shash_node_t));
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
	sorted_list(ht, newnode);
	return (1);
}
/**
 * shash_table_get - function to retreive values associated with keys
 * @ht: pointer to a hash table
 * @key: key to retreive value
 * Return: value or Null if keys dont exist
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t *bucket;

	if (!ht || !key || !*key)
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
/**
 * shash_table_print - prints keyvalue from ht
 * @ht: pointer to a hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *bucket;
	int notended = 0;

	if (!ht)
		return;
	bucket = ht->shead;
	printf("{");
	while (bucket)
	{
		if (notended)
			printf(", ");
		printf("'%s': '%s'", bucket->key, bucket->value);
		notended = 1;
		bucket = bucket->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - function to print the key:value in reverse
 * @ht: pointer to a hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *bucket;
	int notended = 0;

	if (!ht)
		return;
	bucket = ht->stail;
	printf("{");
	while (bucket)
	{
		if (notended)
			printf(", ");
		printf("'%s': '%s'", bucket->key, bucket->value);
		notended = 1;
		bucket = bucket->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - free hash table and all nodes
 * @ht: pointer to a hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *bucket, *au_free;
	unsigned long int j = 0;

	if (!ht)
		return;
	for (j = 0; j < ht->size; j++)
	{
		bucket = ht->array[j];
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

