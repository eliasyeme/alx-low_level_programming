#include "function_pointers.h"

/**
	* array_iterator - map over an element in array
	* @array: array to map over
	* @size: size of the array
	* @action: callback function
	*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
