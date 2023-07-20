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

	if (!separator)
		separator = "";

	va_start(args, n);
	for (i = 0; i < n ; i++)
	{
		printf("%d", va_arg(args, int));
		if (i + 1 < n)
			printf("%s", separator);
	}
	putchar('\n');

	va_end(args);
}
