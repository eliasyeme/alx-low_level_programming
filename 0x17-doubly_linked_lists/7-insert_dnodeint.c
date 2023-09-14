#include "lists.h"

/**
	* insert_dnodeint_at_index - insert new node at a given index
	* @h: input dlistint_t list
	* @idx: position to insert at
	* @n: value
	*
	* Return:	pointer to the new element on success
	*					NULL on fail
	*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
