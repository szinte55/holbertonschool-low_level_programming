#include "holberton.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: pointer to string
 * Return: string after encoding
 */

char *rot13(char *s)
{
	int i, j;
	char before[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; before[j] != 0; j++)
		{
			if (s[i] == before[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}

	return (s);
}
