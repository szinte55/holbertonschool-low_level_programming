/**
 * _strcat - a function that concatenates two strings.
 * @dest: string that appends given string
 * @src: given string
 *
 * Return: pointer of destination
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	for (i = 0; dest[i] != 0; i++)
		;
	for (j = 0; src[j] != 0; j++)
		dest[i + j] = src[j];
	dest[i + j] = 0;

	return (dest);
}
