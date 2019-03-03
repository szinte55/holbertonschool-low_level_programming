#include "holberton.h"

/**
 * _isalpha - check character if letter or not
 *
 * @i: evaluated variable
 *
 * Return: 1 if it is a character, 0 if it is not a character.
 *
 */

int _isalpha(int i)
{
	if (i >= 'a' && i <= 'z')
		return (1);
	else if (i >= 'A' && i <= 'Z')
		return (1);
	else
		return (0);
}
