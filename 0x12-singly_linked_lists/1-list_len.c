#include "lists.h"

/**
 * list_len - length of a linked list
 * @h: input list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
