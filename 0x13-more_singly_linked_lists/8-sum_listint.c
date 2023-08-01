#include "lists.h"

/**
 * sum_listint - sum data of a list
 * @head: input list
 *
 * Return: sum of the data 0 if no data
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}

	return (i);
}
