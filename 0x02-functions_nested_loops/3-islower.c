#include "main.h"

/**
 * _islower - return 1 if @c is lowercase
 * @c: Character to be checked
 * Return: 1 if @c is lower 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
