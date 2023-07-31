#include "lists.h"

/**
 * add_nodeint_end - add node as the last element
 * @head: node list to add to
 * @n: element to add
 *
 * Return: node list or NULL on fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tmp = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!*head)
	{
		*head = node;
		return (*head);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = node;

	return (*head);
}
