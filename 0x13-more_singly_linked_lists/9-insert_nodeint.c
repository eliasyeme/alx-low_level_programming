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
	listint_t *node = *head;
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	if (!node && idx)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0 || !node)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (node && (i + 1 < idx))
	{
		node = node->next;
		i++;
	}

	if (node->next)
	{
		new_node->next = node->next;
		node->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
