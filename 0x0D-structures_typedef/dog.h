#ifndef _DOG_H
#define _DOG_H_

/**
 * struct dog - define a new type with the following elements
 * @name: pointer to string for dog name
 * @age:  float for dog age
 * @owner: pointer to string for dog owner's name
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
