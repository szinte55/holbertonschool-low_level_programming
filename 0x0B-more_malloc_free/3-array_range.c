#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: min of array
 * @max: max of array
 * Return: pointer to int
 */

int *array_range(int min, int max)
{
	int *ptr, *ptr1;
	int diff = max - min + 1;

	if (min > max)
		return (NULL);

	ptr1 = ptr = malloc(sizeof(int) * diff);

	if (ptr == NULL)
		return (NULL);

	for (; min <= max; min++, ptr++)
		*ptr = min;

	return (ptr1);
}
