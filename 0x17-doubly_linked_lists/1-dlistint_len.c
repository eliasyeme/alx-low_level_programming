#include "lists.h"

/**
	* dlistint_len - number of elements in dlistint_t list
	* @h: input list
	*
	* Return: number of elements
	*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (!h)
		return (len);

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
