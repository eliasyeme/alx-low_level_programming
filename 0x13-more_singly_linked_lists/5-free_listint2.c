#include "lists.h"

/**
 * free_listint2 - free up heap
 * @head: input to be cleaned
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
		}
		*head = NULL;
	}
}
