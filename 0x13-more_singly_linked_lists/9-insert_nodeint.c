#include "lists.h"

/**
 * insert_nodeint_at_index - insert element at an index
 * @head: node list
 * @idx: where to insert
 * @n: element to insert
 *
 * Return: node with the new element
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = (listint_t *) malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (!node)
		return (NULL);

	if (!tmp)
		return (NULL);

	node->n = n;
	node->next = NULL;


	while (idx)
	{
		idx--;
		if (tmp)
			tmp = tmp->next;
		else
			break;
	}

	if (idx == 0 && tmp)
	{
		node->next = tmp->next;
		tmp->next = node;
	}

	return (*head);
}
