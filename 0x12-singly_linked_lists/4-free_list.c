#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: the head of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
