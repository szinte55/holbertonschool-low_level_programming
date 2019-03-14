#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name used by a function
 * @name: Name to be printed
 * @f: Function to run on name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
