#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - defines a new type
 * @name: frst member
 * @age: second member
 * @owner:third member
 * Description: defines a new type struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
