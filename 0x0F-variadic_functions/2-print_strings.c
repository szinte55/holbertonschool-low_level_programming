#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: separator is the string to be printed between the strings
 * @n: number of arguments to be passed
 * Return: void
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;
	va_list args;

	if (n != 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			ptr = va_arg(args, char*);
			if (ptr != 0)
				printf("%s", ptr);
			else
				printf("(nil)");
			if ((i < n - 1) && separator != NULL)
				printf("%s", separator);
		}
		printf("\n");
		va_end(args);
	}
	else
	printf("\n");
}
