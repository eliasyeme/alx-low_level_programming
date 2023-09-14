#include "lists.h"

/**
	* add_dnodeint - add node at the beginning
	* @head: beginning of the node
	* @n: value
	*
	* Return:	pointer to the new element on success
	*					NULL on fail
	*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
