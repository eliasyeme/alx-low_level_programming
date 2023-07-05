/**
 * _strlen_recursion - string length via recursion
 * @s: input string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(++s);
	}
	return (len);
}
