int _evalsqrt(int n, int x);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: pointer to string
 *
 * Return: returns the natural square root
 */

int _sqrt_recursion(int n)
{
	return (_evalsqrt(0, n));
}

/**
 * _evalsqrt - evaluate the square root of a number
 *
 * @n: integer we wish to take square root of
 * @i: integer counter used to find square root
 * Return: return i if i is equal to the natural square root of n
 */

int _evalsqrt(int i, int n)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (_evalsqrt(i + 1, n));
}
