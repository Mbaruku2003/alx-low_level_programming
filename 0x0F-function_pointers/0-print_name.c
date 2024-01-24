#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: pointer for name
 * @f: new pointerthat gives address of name pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
