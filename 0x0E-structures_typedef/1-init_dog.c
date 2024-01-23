#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: the dogs name
 * @name: the name of the dog
 * @age: the name of the dog
 * @owner: the owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL && (d->age < 0))
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
