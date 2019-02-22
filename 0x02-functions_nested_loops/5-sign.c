#include "holberton.h"
/**
 * print_sign - print the sign of a number
 * @i: evaluated number
 * Return: returns 1 if # is positive, returns -1 if # is neg, and 0 if 0
 */
int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
