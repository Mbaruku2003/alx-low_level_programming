#include "dog.h"
#include <stdlib.h>
/*
 * print_dog - prints the details f a dog
 * @d - the dog
 * Return : void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("name: %s\n", d->name);
	}
	if (d->age < 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("age: %.6f\n", d->age);
	}
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("owner: %s\n", d->owner);
}
