# include<stdio.h>
/**
 *  _strlen - Returns the length of a string.
 *  @str: the string to get a length of
 *  Return: the length of the string.
 */
size_t _strlen(const char *str)

{
	size_t length = 0;
	while (*str++)
	length++;
	return (length);
}
