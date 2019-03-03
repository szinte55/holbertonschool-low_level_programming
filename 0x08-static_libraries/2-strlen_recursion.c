#include "holberton.h"
/**
 * _strlen_recursion  - function that returns the length of a string
 * @s: pointer to string
 * Return: return length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}
