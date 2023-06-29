/**
 * cap_string - capitalize every word
 * @s: input string
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int check, i = 0;
	char c;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= ('a' - 'A');

	for (; s[i] != '\0'; i++)
	{
		c = s[i];
		check = c == ',' || c == ';' || c == '.' || c == '!' ||
			c == '?' || c == '(' || c == ')' || c == '{' ||
			c == '}' || c == ' ' || c == '\t' || c == '\n';

		if (check && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= ('a' - 'A');
	}

	return (s);
}
