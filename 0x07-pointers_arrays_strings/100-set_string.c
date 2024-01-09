#include "main.h"
/**
 * set_string - sets the value of a pointer to a char.
 * @s: pointer that sets the value of a char
 * @to: the char being changed
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
