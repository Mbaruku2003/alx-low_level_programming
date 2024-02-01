#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: the number of elements of the list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
