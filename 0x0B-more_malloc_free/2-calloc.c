#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: size of each element in array
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if ((size) == 0 || (nmemb == 0))
		return (NULL);

	array = malloc(size * nmemb);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
		array[i] = 0;

	return (array);
}
