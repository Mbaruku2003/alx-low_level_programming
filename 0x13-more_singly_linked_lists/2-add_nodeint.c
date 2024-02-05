#include "lists.h"
/**
 * add_nodeint - adds a new node to the beggining of listnt
 * @head: the header file
 * @n: the number of integers
 * Return: the addresss of a new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *leo;

	if (head == NULL)
	{
		return (NULL);
	}
	leo = malloc(sizeof(listint_t) * n);
	if (leo == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		leo->next = NULL;
	}
	else
	{
		leo->next = *head;
	}
	leo->n = n;
	*head = leo;
	return (*head);
}
