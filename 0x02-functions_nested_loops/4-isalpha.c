#include "main.h"

/**
 * _isalpha - return 1 if @c is an alphapet character
 * @c: Character to be checked
 * Return: 1 if @c is lower 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
