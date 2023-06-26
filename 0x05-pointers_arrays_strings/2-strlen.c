/**
 * _strlen - return length of a string
 * @s: the string to be counted
 * Return: length of the string in integer
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;

	return (count);
}
