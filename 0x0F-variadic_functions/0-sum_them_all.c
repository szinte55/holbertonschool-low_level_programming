#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of input arguments
 * Return: sum of all input arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;
	va_start(args, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
			sum = sum +  va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
