#include "holberton.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: pointer to string
 * Return: Void
 */
void puts_half(char *str)
{
	int i, length = 1;

	while (str[length] != 0)
	{
		length++;
	}
	if (length % 2 == 0)
	{
		for (i = length / 2 ; i < length ; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (length + 1) / 2; i < length; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
