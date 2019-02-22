#include "holberton.h"

/**
 * _islower - check if characters are lowercase
 *
 * @i: character to evaluate
 * Return: returns 1 if letter is lowercase, 0 otherwise
 *
 */
int _islower(int i)
{
	if (i >= 'a' && i <= 'z')
		return (1);
	else
		return (0);
}
