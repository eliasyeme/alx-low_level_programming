/**
 * is_prime - check prime number
 * @n: input number
 * @i: counter
 *
 * Return: 1 if true 0 if not
 */
int is_prime(int n, int i)
{
	if (i < 2)
		return (1);
	else if (n % i == 0)
		return (0);

	return (is_prime(n, i - 1));
}

/**
 * is_prime_number - find prime number
 * @n: input number
 *
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime(n, n / 2));
}
