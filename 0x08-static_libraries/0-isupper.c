#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - check if characters are uppercase
 *
 * @c: character to evaluate
 * Return: returns 1 if letter is uppercase, 0 otherwise
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
