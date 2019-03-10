#include "holberton.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: pointer to string
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i, j;
	char c[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}

	for (i = 1; s[i] != 0; i++)
	{
		for (j = 0; c[j] != 0; j++)
		{
			if (s[i] == c[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
		}
	}

	return (s);
}
