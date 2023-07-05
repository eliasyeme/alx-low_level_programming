/**
 * _sqrt - find natural square root
 * @n: input number
 * @odd: odd subtraction number
 *
 * Return: square root
 */
int _sqrt(int n, int odd)
{
	int count = 0;

	if (n > 0)
	{
		count++;
		count += _sqrt(n - odd, odd + 2);
	}

	return (count);
}

/**
 * _sqrt_recursion - find natural square root of a number
 * @n: input number
 *
 * Return: square root of the input number
 */
int _sqrt_recursion(int n)
{
	int guess;

	if (n == 0 || n == 1)
		return (n);

	guess = _sqrt(n, 1);

	if (guess * guess == n)
		return (guess);
	else
		return (-1);
}
