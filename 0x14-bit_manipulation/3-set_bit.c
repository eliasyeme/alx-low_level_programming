#include "main.h"

/**
	* set_bit - given an index set value to 1
	* @n: source number pointer to set the bit
	* @index: given index
	*
	* Return: 1 on success
	*					-1 if error occured
	*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long mask = 1;

	if (index >= 64)
		return (-1);

	mask <<= index;
	*n |= mask;
	return (1);
}
