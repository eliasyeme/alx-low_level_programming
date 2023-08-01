#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert element at an idx
 * @head: node list
 * @idx: where to insert
 * @n: element to insert
 *
 * Return: node with the new element
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *tmp = *head;
	unsigned int i = 0;

	while (tmp->next)
	{
		i++;
		tmp = tmp->next;
	}

	if (idx > i)
		return (NULL);

	node = (listint_t *)malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;
	i = 0;
	while (head)
	{
		if (i == idx)
		{
			if (i == 0)
			{
				node->next = *head;
				*head = node;
				return (node);
			}
			node->next = tmp->next;
			tmp->next = node;
			return (node);
		}
		else if ((i + 1) == idx)
			tmp = *head;
		head = &((*head)->next);
		i++;
	}
	return (NULL);
}
