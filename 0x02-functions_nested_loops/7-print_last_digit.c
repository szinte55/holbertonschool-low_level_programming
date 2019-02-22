#include "holberton.h"
/**
 * print_last_digit - print last digit of a number using putchar
 * @i: integer being evaluated
 *
 * Return: the last digit of a number
 */

int print_last_digit(int i)
{
	int j = i % 10;

	if (j < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
