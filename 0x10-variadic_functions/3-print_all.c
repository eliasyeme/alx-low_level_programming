#include "variadic_functions.h"
/**
 * print_all - print according to format specifier
 * @format: format specifier
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *s;
	va_list args;

	i = 0;
	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				j = 1;
				break;
		}
		if (format[i + 1] && !j)
			printf(", ");
		i++;
	}
	va_end(args);

	printf("\n");
}
