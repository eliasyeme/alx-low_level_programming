#include "lists.h"

/**
 * free_list - free up heap
 * @head: input to be cleaned
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
