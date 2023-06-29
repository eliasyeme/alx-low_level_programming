/**
 * _strncat concat two words
 * @dest: destination
 * @src: source
 * @n: maximum byte
 * Return: resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len = 0;

	while (dest[len] != '\0')
		len++;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			break;
		dest[len + i] = src[i];
	}

	return (dest);
}
