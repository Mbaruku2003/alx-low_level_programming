#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - sum of all the data 
 * @head: the pointer to the list
 * Return the sum f all data
 */
int sum_dlistint(dlistint_t *head)
{
	int leo = 0;

	if (head == NULL)
		return (leo);
	while (head->prev != NULL)
	{
		head = head->prev;
	}
	while (head != NULL)
	{
		leo = leo + head->n;
		head = head->next;
	}
	return (leo);
}
