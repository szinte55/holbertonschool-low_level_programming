#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: format is a list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *temp, *seperator;

	va_start(args, format);

}
