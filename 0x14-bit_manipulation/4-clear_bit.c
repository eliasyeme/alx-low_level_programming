#include "main.h"

/**
	* clear_bit - given an index set value to 0
	* @n: source number pointer to set the bit
	* @index: given index
	*
	* Return: 1 on success
	*					-1 if error occured
	*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long mask;

	if (index >= 64)
		return (-1);

	mask = ~(1 << index);
	*n &= mask;
	return (1);
}
