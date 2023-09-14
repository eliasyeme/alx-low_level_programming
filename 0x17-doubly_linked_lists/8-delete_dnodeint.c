#include "lists.h"

/**
	* delete_dnodeint_at_index - delete a node at an index
	* @head: input dlistint_t list
	* @index: position of the node to delete
	*
	* Return: 1 on success
	*					-1 on fail
	*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	if (!*head)
		return (-1);

	node = *head;
	if (index == 0)
	{
		*head = node->next;
		if (node->next)
			node->next->prev = NULL;
		free(node);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (!node->next)
			return (-1);
		node = node->next;
	}

	node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;
	free(node);

	return (1);
}
