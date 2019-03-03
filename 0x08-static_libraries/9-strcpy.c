#include "holberton.h"
/**
 * _strcpy - function that copies string pointed to by src
 * pointed to by dest
 * @dest: pointer to char
 * @src: pointer to char
 * Return: pointer to char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = 0;

	return (dest);
}
