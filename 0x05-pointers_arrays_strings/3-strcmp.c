/**
 * _strcmp - function that compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: return the lexicographic difference of the two passed strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0;  s1[i] != 0 && s2[i] != 0; i++)
	{
		if (s1[i] - s2[i] != 0)
			break;
	}

	return (s1[i] - s2[i]);
}
