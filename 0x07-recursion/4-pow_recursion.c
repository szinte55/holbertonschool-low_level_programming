/**
 * _pow_recursion - function that returns the value of x to the power of y
 * @x: base of exponent
 * @y: power
 * Return: the value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
