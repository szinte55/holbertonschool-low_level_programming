#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name -  function that prints a name
 * @name: pointer to char used for name
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NUL)
		return;

	if (name == NULL)
		return;

	f(name);
}
