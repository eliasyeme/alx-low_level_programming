#include "lists.h"

/**
	* free_dlistint - free dlistint_t list
	* @head: input list
	*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
