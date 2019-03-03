#include "holberton.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: pointer to string
 * Return: Void
 */
void puts_half(char *str)
{
	int x, n;

	for (x = 0; str[x] != 0; x++)
		;
	x--;

	for (n = x / 2 + 1; str[n] != 0; n++)
		_putchar(str[n]);

	_putchar('\n');
}
