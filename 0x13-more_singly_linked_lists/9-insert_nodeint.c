#include "lists.h"

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
	unsigned int i;
	listint_t *tmp, *node;

	if (!head)
		return (NULL);

	node = (listint_t *) malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;

	if (idx)
	{
		tmp = *head;
		for (i = 0; tmp && i < idx - 1; i++)
			tmp = tmp->next;

		if (!tmp)
			return (NULL);
	}

	if (!idx)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	node->next = tmp->next;
	tmp->next = node;
	return (node);
}
