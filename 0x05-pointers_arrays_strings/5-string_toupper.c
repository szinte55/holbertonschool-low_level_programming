/**
 * string_toupper - function that changes lowercase letters to uppercase
 * in a string
 *
 * @c: given string
 *
 * Return: pointer to string
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != 0; i++)
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;

	return (c);
}
