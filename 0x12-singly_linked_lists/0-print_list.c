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

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}

	return (i);
}
