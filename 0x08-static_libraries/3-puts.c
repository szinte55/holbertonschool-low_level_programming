#include "holberton.h"

/**
 * _puts - print string followed by new line dout
 * @str: char pointer to string
 * Return: Void
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != 0)
	{
		_putchar(*(str + a));
		a++;
	}
	_putchar('\n');
}
