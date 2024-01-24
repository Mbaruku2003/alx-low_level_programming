#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * int_index - executes a function given as a parameter on each element
 * @size: the number of elements in the arrray
 * @cmp: pointer to the function to be used to declare variables
 * @array: holds the number of elements
 * Return: (-1)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		return (i);
	}
	return (-1);
}
