#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: the head to be deleted
 * Return: the head nodes data n
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	temporary = *head;
	*head = (*head)->next;
	free(temporary);
	return (n);
}
