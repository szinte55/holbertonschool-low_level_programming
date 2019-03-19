#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * charprint - function that prints a char
 * @args: argument list
 * Return: void
 */
void charprint(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * intprint - function that prints an int
 * @args: argument list
 * Return: void
*/
void intprint(va_list args)
{
	printf("%d", va_arg(args, int));
}


/**
 * stringprint - function that prints a string
 * @args: argument list
 *
 * Return: void
 */
void stringprint(va_list args)
{
	char *z = va_arg(args, char *);

	if (!z)
	{
		printf("(nil)");
		return;
	}
	printf("%s", z);
}
/**
 * floatprint - function that prints floats
 * @args: argument list
 *
 * Return: void
 */
void floatprint(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_all - function that prints anything
 * @format: format is a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	pips1 pips[] = {
		{'c', charprint},
		{'i', intprint},
		{'f', floatprint},
		{'s', stringprint},
		{'\0', NULL}
	};
	char *seper1 = "", *seper2 = ", ";
	va_list args;
	int i = 0, j = 0;


	va_start(args, format);

	while (format !=  NULL && format[i] != 0)
	{
		j = 0;
		while (pips[j].p != 0)
		{
			if (format[i] == pips[j].p)
			{
				printf("%s", seper1);
				pips[j].f(args);
				seper1 = seper2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
