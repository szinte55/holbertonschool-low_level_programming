#include "holberton.h"

/**
 * print_line - Draw a straight line in the terminal
 *@n: parameter passed
 * Return: Void
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
