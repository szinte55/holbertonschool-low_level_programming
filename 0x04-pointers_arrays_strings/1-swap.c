/**
 * swap_int - function that will swap the values of two integers
 * @a: first integer pointer
 * @b: second integer pointer
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
