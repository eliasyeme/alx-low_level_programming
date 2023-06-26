/**
 * _strlen - return length of a string
 * @s: the string to be counted
 * Return: length of the string in integer
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
