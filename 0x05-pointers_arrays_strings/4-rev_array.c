/**
 * reverse_array - function that reverses the contents of an array of integers
 *
 * @n: size of array
 * @a: pointer to an array of integers
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, swap;

	n--;
	for (i = 0; i <= n ; i++, n--)
	{
		swap = a[n];
		a[n] = a[i];
		a[i] = swap;
	}
}
