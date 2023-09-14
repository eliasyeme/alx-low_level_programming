#include "lists.h"

/**
	* add_dnodeint_end - add node at the end
	* @head: input list head
	* @n: value
	*
	* Return:	pointer to the new element on success
	*					NULL on fail
	*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while ((*head)->next)
		*head = (*head)->next;
	(*head)->next = new;
	new->prev = *head;

	while ((*head)->prev)
		*head = (*head)->prev;

	return (new);
}
