#include "lists.h"

/**
 * add_nodeint - prepend a node to a list
 * @head: list to prepend to
 * @n: element of the node to be added
 *
 * Return: the new list or NULL on fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = (listint_t *) malloc(sizeof(listint_t));
	if (node)
	{
		node->n = n;
		node->next = *head;
		*head = node;
		return (node);
	}
	return (NULL);
}
