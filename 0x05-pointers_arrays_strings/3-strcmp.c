/**
 * _strcmp - function that compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: return the lexicographic difference of the first and second string
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != 0 && s2[i] != 0; i++)
	{
		if (s1[i] - s2[i] != 0)
		{
			break;
		}
	}

	return (s1[i] - s2[i]);
}
