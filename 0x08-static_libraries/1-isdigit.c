#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit 0 through 9
 *
 * @c: character to evaluate
 * Return: returns 1 if number  is a digit 0 through 9, 0 otherwise
 *
 */
int _isdigit(int c)
{
	if (c >= '0'  && c <= '9')
		return (1);

	return (0);
}
