#include "lists.h"

/**
 * print_list - print len and string
 * @h: input list
 *
 * Return: number of elements printed
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	int len;
	char *s;

	while (h)
	{
		s = h->str;
		len = h->len;
		if (!s)
		{
			s = "(nil)";
			len = 0;
		}
		printf("[%d] %s\n", len, s);
		h = h->next;
		i++;
	}

	return (i);
}
