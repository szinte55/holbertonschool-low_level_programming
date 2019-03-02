/**
 * _memset - write a function that fills memory with a constant byte
 *
 * @s: pointer to string
 * @b: constant byte
 * @n: size of memory area to be filled
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);
}
