#include "lists.h"
/**
 * creates_new_node - inserts node at index
 * @n: the value
 * Return: new node
 */
listint_t *creates_new_node(int n)
{
	listint_t *neno;

	neno = malloc(sizeof(listint_t));
	if (neno == NULL)
	{
		return (NULL);
	}
	neno->n = n;
	neno->next = NULL;

	return (neno);
}
/**
 * insert_nodeint_at_index - inserts node at index
 * @head: the head pointer
 * @n: the n value
 * @idx: the index of the list
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *temporary;
	listint_t *temporary_old;
	listint_t *new_node;

	temporary = *head;
	if (head == NULL)
		return (NULL);
	new_node = creates_new_node(n);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	if (idx == 0)
		*head = new_node;
	for (j = 0; j < idx - 1 && temporary != NULL && idx != 0; j++)
		temporary = temporary->next;
	if (temporary == NULL)
		return (NULL);
	if (idx == 0)
		new_node->next = temporary;
	else
	{
		temporary_old = temporary->next;
		temporary->next = new_node;
		new_node->next = temporary_old;
	}
	return (new_node);
}
