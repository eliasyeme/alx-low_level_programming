/**
 * _memset - fill memory with a constant byte
 * @s: pointer to the memeory
 * @b: byte to fill with
 * @n: number of bytes to fill
 *
 * Return: the memory back
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
