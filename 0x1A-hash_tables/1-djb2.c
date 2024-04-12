#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_djb2 - create a hash table
 * @str - size of the array
 * Return - returns the hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}