/**
 * factorial - function that returns the factorial of a given number
 * @n: integer number
 *
 * Return: n factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (factorial(n - 1) * n);
	else
		return (1);
}
