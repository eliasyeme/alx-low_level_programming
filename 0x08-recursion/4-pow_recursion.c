/**
 * _pow_recursion - value of a number raised to other numbre
 * @x: base
 * @y: exponent
 *
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
