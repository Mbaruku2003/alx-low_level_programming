#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at indexof a listint
 * @head: the head pointer
 * @index: the index of the node that should be deleted
 * Return: 1 else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temporary;
	listint_t *node;

	temporary = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0; i < index - 1 && temporary != NULL && index != 0; i++)
		temporary = head->next;
	if (temporary == NULL)
		return (-1);
	if (index == 0)
	{
		node = temporary->next;
		free(temporary);
		*head = node;
	}
	else
	{
		if (temporary->next == NULL)
			node = temporary->next;
		else
			node = temporary->next->next;
		free(temporary->next);
		temporary->next = node;
	}
	return (1);
}
