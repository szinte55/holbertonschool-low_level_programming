#include "holberton.h"

/**
 * leet - function that encodes a string into 1337
 * @s: pointer to string that is passed to function
 * Return: string after it is converted
 */

char *leet(char *s)
{
	int i, j;
	char before[] = "aAeEoOtTlL";
	char after[] = "4433007711";

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; before[j] != 0; j++)
		{
			if (s[i] == before[j])
				s[i] = after[j];
		}
	}
	return (s);
}
