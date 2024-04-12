#include "hash_tables.h"
/**
 * key_index - the key index
 * @key: the key
 * @size: the size
 * Return: the index for storing the key valuse pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
