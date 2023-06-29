/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if equal, the difference if not
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; (s1[i] != '\0' && s2[i] != '\0'); i++)
	{
		if ((s1[i] - s2[i]) != 0)
			return (s1[i] - s2[i]);
	}

	return (0);
}
