#include "lists.h"

/**
* print_list - print elements of list
* @h: input list to print
*
* Return: number of elements printed
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (i = 0; h; i++)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
	}
	return (i);
}
