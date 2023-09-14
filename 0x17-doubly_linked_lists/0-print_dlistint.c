#include "lists.h"

/**
 * print_dlistint - print all elements of dlistint_t
 * @h: list to print
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	if (!h)
		return (len);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
