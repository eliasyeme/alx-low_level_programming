/**
 * _memcpy - copy number of bytes to memory area
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes to copy
 *
 * Return: pointer to destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
