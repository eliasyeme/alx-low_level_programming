#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: separate with
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list args;

	if (!separator)
		separator = "";

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (s == NULL)
			s = "(nil)";

		if ((i + 1) != n)
			printf("%s%s", s, separator);
		else
			printf("%s\n", s);
	}
	va_end(args);
}
