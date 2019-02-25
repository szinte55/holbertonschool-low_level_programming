/**
 * _memcpy - function that copies memory area
 *
 * @src: pointer to source string
 * @n: number of bytes function will copy
 * @dest: pointer to destination string
 *
 * Return: pointer to string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);

}
