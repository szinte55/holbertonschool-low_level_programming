#include "holberton.h"

/**
 * print_most_numbers - Print  the nunmbers 0 through 9 except for 2 and 4
 *
 * Return: Void
 */
void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x != '2' && x != '4')
			_putchar(x);
	}
	_putchar('\n');
}
