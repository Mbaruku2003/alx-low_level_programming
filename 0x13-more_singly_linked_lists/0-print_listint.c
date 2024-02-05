#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: the header
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count =  0;
	int i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
