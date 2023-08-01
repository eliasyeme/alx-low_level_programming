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
	unsigned int i = 0;
	listint_t *prv_node, *node = *head;
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	while (node)
	{
		if (i == idx)
		{
			if (idx == 0)
			{
				new_node->next = *head;
				*head = new_node;
				return (*head);
			}
			new_node->next = prv_node->next;
			prv_node->next = new_node;
			return (*head);
		}
		else if ((i + 1) == idx)
			prv_node = node;
		node = node->next;
		i++;
	}
	return (NULL);
}
