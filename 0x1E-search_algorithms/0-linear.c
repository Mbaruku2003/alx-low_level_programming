#include <stdio.h>
/**
 * linear_search - searches for a value in an array of integers
 * @array: the array of integers
 * @size: the number of elements of the array
 * @value: the value being searched for
 * Return: -1 if the value is not present or Null
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return -1;
	}
	for (i = 0; i < size; i++)
	{
		_printer(array[i] + '0');
		if (array[i] == value)
		{
			return i;
		}
	}
	return -1;
}
