/**
 * _strspn - count bytes that appear in @s from @accept
 * @s: input string
 * @accept: bytes to count
 *
 * Return: byte count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int count = 0;

	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			else if (!accept[i + 1])
				return (count);
		}
	}
	return (count);
}
