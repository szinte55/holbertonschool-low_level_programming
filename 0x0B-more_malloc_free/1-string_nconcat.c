#include <stdlib.h>

/**
 * _strlen - function that returns length of string
 * @s: pointer to string
 * Return: return string length
 */

int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != 0; x++)
		;
	return (x);
}

/**
 * string_nconcat - function that concatenates two strings
 * @s1: base string that is appended
 * @s2: string that is used to concatenate base string
 * @n: n bytes from string 2
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len;
	char *ret;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if ((int) n < _strlen(s2))
		len = _strlen(s1) + n + 1;
	else
		len = _strlen(s1) + _strlen(s2) + 1;
	ret = malloc(len);
	if (ret == NULL)
		return (NULL);
	for (i = 0; s1[i] != 0; i++)
		ret[i] = s1[i];
	for (j = 0; s2[j] != 0; j++, i++)
		ret[i] = s2[j];
	ret[i] = '\0';
	return (ret);
}
