#include "lists.h"
/**
 * add_nodeint_end - adds a new node to the end of a list
 * @head: apointer to a node
 * @n: constant to a space in size
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *leo;
	listint_t *temporary;
	(void)temporary;

	leo =  malloc(sizeof(listint_t));
	if (leo == NULL)
	{
		return (NULL);
	}
	leo->n = n;
	leo->next = NULL;
	temporary = *head;
	if (*head == NULL)
	{
		*head = leo;
	}
	else
	{
		while (temporary->next != NULL)
		{
			temporary = temporary->next;
		}
		temporary->next = leo;
	}
	return (*head);
}
