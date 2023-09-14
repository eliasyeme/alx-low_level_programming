#include "lists.h"

/**
	* len - number of elements in dlistint_t list
	* @h: input list
	*
	* Return: number of elements
	*/
unsigned int len(const dlistint_t *h)
{
	unsigned int len = 0;

	if (!h)
		return (len);

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}

/**
	* insert_dnodeint_at_index - insert new node at a given index
	* @h: input dlistint_t list
	* @idx: position to insert at
	* @n: value
	*
	* Return:	pointer to the new element on success
	*					NULL on fail
	*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	unsigned int i;

	if (idx > len(*h))
		return (NULL);


	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);

		new->n = n;

		for (i = 0; i < idx - 1; i++)
			*h = (*h)->next;

		new->prev = *h;
		new->next = (*h)->next;
		if ((*h)->next)
			(*h)->next->prev = new;
		(*h)->next = new;
		while ((*h)->prev)
			*h = (*h)->prev;
	}
	return (new);
}
