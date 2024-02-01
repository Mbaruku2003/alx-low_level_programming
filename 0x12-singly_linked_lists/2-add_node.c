#include "lists.h"
/**
 * add_node - adds a new node to the beggining of a list_t list
 * @head: main linked list
 * @str: The string to add at the node
 * Return: new list address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *leo;
	int length = 0;

	leo = malloc(sizeof(list_t));
	if (leo == NULL)
		return (NULL);
	while (str[length])
		length++;

	leo->len = length;
	leo->str = strdup(str);
	leo->next = *head;
	*head = leo;
	return (leo);
}
