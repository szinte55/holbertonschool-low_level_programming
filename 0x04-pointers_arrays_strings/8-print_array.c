#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integer
 * @a: pointer to integer
 * @n: n is the number of elements of the array to be printed
 * Return: Void
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		printf("%d", a[x - 1]);
		if (x < n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
