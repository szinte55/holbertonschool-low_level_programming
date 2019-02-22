#include "holberton.h"

/**
 * print_alphabet_x10 - print lower case alphabet x10
 *
 * Return - void
 */

void print_alphabet_x10(void)
{
	char C;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (C = 'a'; C <= 'z'; C++)
			_putchar(C);
		_putchar('\n');
	}
}
