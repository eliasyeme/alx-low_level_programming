#include "main.h"

/**
	* get_bit - value of a bit at an index
	* @n: source number to find the bit
	* @index: given index
	*
	* Return: value of the bit on success
	*					-1 if error occured
	*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	return ((n >> index) & 1);
}
