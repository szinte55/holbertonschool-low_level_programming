#include "holberton.h"

/**
 * rev_string - a function that will reverse a string
 * @s: pointer to string
 *
 * Return: Void
 */
void rev_string(char *s)
{
	int i = 0, length = 0;
	char tmp;

	while (s[length] != 0)
	{
		length++;
	}
	length--;
	while (i < length)
	{
		tmp = s[length];
		s[length] = s[i];
		s[i] = tmp;
		length--;
		i++;
	}
}
