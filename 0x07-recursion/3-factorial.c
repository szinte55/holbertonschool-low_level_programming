/**
 * factorial - function that returns the factorial of a given number
 * @n: integer number
 *
 * Return: n factorial
 */
int factorial(int x)
{
	if (x < 0)
		return (-1);
	if(x > 0)
		return (x * factorial(x - 1));
	else
		return (1);
}
