#include "lists.h"

/**
 * free_listint - free up heap
 * @head: input to be cleaned
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
