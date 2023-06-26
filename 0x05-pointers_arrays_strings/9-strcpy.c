/**
 * _strcpy - copy string from src to dest
 * @dest: destination for the string to be copied
 * @src: input string to copy
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	dest[len] = '\0';

	return (dest);
}
