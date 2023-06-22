/**
 * _isdigit - check if a given character is a digit
 * @c: number to be checked
 * Return: 1 if input is a digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
