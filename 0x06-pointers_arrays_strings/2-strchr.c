/**
 * _strchr - function that locates a character in a string
 *
 * @s: pointer to string that will be searched
 * @c: pointer to character
 *
 * Return: pointer to first occurence of character c in string s
 * or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	unsigned int x;

	for (x = 0; s[x] != 0; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	if (c == 0)
		return ('\0');

	return (0);
}
