#ifndef _DOGGY_
#define _DOGGY_

/**
 * struct dog - define a new type struct dog with the following elements
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
} dog_t;



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
