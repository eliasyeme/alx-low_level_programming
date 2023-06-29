/**
 * leet - encode in leet
 * @s: string to encode
 * Return: encoded string
 */
char *leet(char *s)
{
	int j, is_lower, is_upper, is_inletter, i = 0;
	char *letter = "AEOTL";
	char *code = "43071";

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			is_lower = (s[i] >= 'a' && s[i] <= 'z');
			is_upper = (s[i] >= 'A' && s[i] <= 'Z');
			is_inletter = (s[i] == letter[j] || (letter[j] + 32) == s[i]);
			if ((is_lower || is_upper) && is_inletter)
				s[i] = code[j];
		}
	}
	return (s);
}
