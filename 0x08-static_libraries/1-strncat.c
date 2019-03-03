#include "holberton.h"
/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: base string that is appended
 * @src: string that is appended to dest
 * @n: n bytes
 * Return: string after it is appended
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	for (i = 0 ; dest[i] != 0; i++)
		;

	for (j = 0; src[j] != 0 && n > 0; j++)
	{
		dest[i] = src[j];
		i++;
		n--;
	}

	return (dest);
}
