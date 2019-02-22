#include "holberton.h"

/**
 * puts2 - Write a function that prints one char out of 2 of a string
 * followed by new line
 * @str: pointer to string
 * Return: Void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
