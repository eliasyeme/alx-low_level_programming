#include "lists.h"

/**
	* delete_nodeint_at_index - delete node at an index
	* @head: input list
	* @index: index of the node to be deleted
	*
	* Return: 1 on success -1 on fail
	*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *node = *head;
	unsigned int i = 0;

	while (node)
	{
		if (i == index)
		{
			if (index == 0)
			{
				*head = node->next;
				free(node);
				return (1);
			}
			tmp->next = node->next;
			free(node);
			return (1);
		}
		else if ((i + 1) == index)
			tmp = node;
		node = node->next;
		i++;
	}
	return (-1);
}
