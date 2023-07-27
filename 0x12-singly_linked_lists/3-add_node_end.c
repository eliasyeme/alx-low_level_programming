#include "lists.h"

/**
 * add_node_end - append node
 * @head: input list
 * @str: input list value
 *
 * Return: appended list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last, *node = (list_t *)malloc(sizeof(list_t));

	if (node && str)
	{
		node->str = strdup(str);
		node->len = strlen(str);
		node->next = NULL;

		if (!*head)
			*head = node;
		else
		{
			last = *head;
			while (last->next)
				last = last->next;
			last->next = node;
		}
		return (*head);
	}
	return (NULL);
}
