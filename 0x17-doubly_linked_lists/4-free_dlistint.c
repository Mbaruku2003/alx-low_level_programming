#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: the pointer to the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *iterator;
	iterator = head;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}
	while((iterator = head) != NULL)
	{
		head = head->next;
		free(iterator);
	}
}
