#include "lists.h"

/**
 * listint_len - number of elements in linked list
 * @h: input list
 *
 * Return: length of the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
