#include "main.h"

/**
	* flip_bits - count number of bits needed to flip to get
	*							from one number to another
	* @n: starting number
	* @m: destination number
	*
	* Return: number of filped bits
	*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long diff = n ^ m;

	while (diff)
	{
		if (diff & 1)
			count++;
		diff >>= 1;
	}
	return (count);
}
