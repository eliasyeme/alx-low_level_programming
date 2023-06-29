/**
 * _strcat - append source string to destination string
 * @dest: destination string
 * @src: source string
 * Return: destination string after appending
 */
char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	while (dest[len] != '\0')
		len++;

	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];

	return (dest);
}
