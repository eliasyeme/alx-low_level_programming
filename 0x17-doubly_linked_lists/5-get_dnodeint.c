#include "lists.h"

/**
	* get_dnodeint_at_index - get nth node of a dlistint_t list
	* @head: input list
	* @index: position of the node
	*
	* Return:	pointer to the new element on success
	*					NULL on fail
	*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int i = 0;

	if (index == 0)
		return (head);

	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
