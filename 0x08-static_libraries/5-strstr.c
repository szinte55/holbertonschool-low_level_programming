/**
 * _strstr - function that finds the first occurrence of a substring in a
 * a given string
 *
 * @haystack: given string to search
 * @needle: string to match
 * Return: pointer to beginning of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int x;

	for (x = 0; haystack[x] != 0; haystack++)
	{
		for (x = 0; haystack[x] == needle[x]; x++)
			;
		if (needle[x] != 0)
			return (haystack);
	}
	return (0);
}