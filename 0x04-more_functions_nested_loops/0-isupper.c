#include "main.h"

/**
 * _isupper - check if a given letter is uppercase
 * @c: letter to be checked
 * Return: 1 if uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
