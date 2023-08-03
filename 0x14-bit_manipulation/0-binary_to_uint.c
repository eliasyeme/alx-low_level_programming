#include "main.h"

/**
	* binary_to_uint - convert binary numbers to unsigned int
	* @b: pointer to string of '0' and '1' chars
	*
	* Return: converted number on success
	*					0 if string contains non '0' or '1' chars
	*					0 if b is NULL
	*/
unsigned int binary_to_uint(const char *b)
{
	const char *s = b;
	unsigned int uint = 0, i = 0, base = 1;

	if (!s)
		return (0);

	while (*s)
	{
		if (*s != '0' && *s != '1')
			return (0);
		s++;
		i++;
	}

	while (i--)
	{
		uint += (b[i] - '0') * base;
		base *= 2;
	}
	return (uint);
}
