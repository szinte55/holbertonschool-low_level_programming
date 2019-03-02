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
	unsigned int p;

	for (p = 0; p < n; p++)
		dest[p] = src[p];

	return (dest);

}
