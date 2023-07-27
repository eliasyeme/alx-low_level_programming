#include "lists.h"

/**
 * add_node - add node to a list
 * @head: where to add
 * @str: data to add
 *
 * Return: address to the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (!str)
		return (NULL);

	node = (list_t *)malloc(sizeof(list_t));

	if (node)
	{
		node->str = strdup(str);
		node->len = strlen(str);
		node->next = *head;
		*head = node;
		return (node);
	}

	return (NULL);
}
