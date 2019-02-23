/**
 * _strcmp - function that compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: return the lexicographic difference of the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = s1[i]-s2[i];

	while( s1[i] != 0 && s2[i] != 0)
	{
		if (diff != 0)
			break;
		i++;
	}

	return (diff);
}
