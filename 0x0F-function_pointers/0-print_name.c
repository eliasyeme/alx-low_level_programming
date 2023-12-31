#include "function_pointers.h"

/**
	* print_name - prints string using callback function
	* @name: name string
	* @f: callback function
	*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
