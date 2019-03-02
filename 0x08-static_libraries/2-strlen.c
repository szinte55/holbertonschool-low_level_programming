/**
 * _strlen - returns the length of arbitrary lengthed string
 * @s: string parameter passed
 * Return: return length of string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != 0)
		a++;
	return (a);
}
