#include "variadic_functions.h"

/**
	* print_numbers - print numbers followed by newline
	* @separator: separate with
	* @n: number of arguments
	*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n == 0)
		return;

	va_start(args, n);

	if (separator != NULL)
	{
		for (i = 0; i < (n - 1); i++)
			printf("%d%s", va_arg(args, int), separator);

		printf("%d\n", va_arg(args, int));
	}

	va_end(args);
}
