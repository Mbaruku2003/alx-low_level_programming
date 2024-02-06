#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: the first head
 * @index: the index of the node
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x < index; x++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
