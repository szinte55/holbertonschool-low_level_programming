#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
#include <limits.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: unsigned int passed to function
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *pointer = malloc(b);

	if (pointer == NULL)
		exit(98);
	else
		return (pointer);
}
