/**
 * rot13 - encode in rot13
 * @s: input string
 * Return: encoded string
 */
char *rot13(char *s)
{
	char *letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *code =    "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = code[j];
				break;
			}

		}
	}
	return (s);
}
