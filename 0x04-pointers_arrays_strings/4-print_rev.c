#include "holberton.h"
/**
 * print_rev - print a string backwards followed by a new line
 * @s: pointer to string
 * Return: Void
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != 0)
		a++;
	a--;
	while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
