#include "lists.h"

/**
	* print_listint - print all elements of a list
	* @h: list to print
	*
	* Return: number of nodes
	*/
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
