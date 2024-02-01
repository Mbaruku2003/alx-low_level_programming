#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the real head
 * @str: the node to be duplicated
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *old_node;
	size_t number;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (number = 0; str[number]; number++)
		;
	new_node->next = NULL;
	old_node = *head;
	if (old_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (old_node->next != NULL)
			old_node = old_node->next;
		old_node->next = new_node;
	}
	return (*head);
}
