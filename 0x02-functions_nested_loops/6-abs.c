#include "holberton.h"
/**
 * _abs - evaluate the absolute value of a number
 * @i: integer being evaluated
 * Return: the absolute value of i
 */

int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (-1 * i);
	return (0);
}
