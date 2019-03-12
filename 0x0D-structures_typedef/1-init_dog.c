#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a function that initializes a variable of type struct dog
 * @d: structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
