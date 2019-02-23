/**
 * _strncpy - function that copies a strng
 *
 * @dest: pointer to the destination array where the content is to be copied
 * @src: string to be copied
 * @n: number of bytes specified
 *
 * Return: destination array
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != 0 && i < n; i++)
		dest[i] = src[i];

	while(i < n)
	{
		dest[i] = 0;
		i++;
	}

	return (dest);
}
