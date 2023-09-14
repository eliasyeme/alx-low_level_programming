#include "lists.h"

/**
	* sum_dlistint - sum of all data(n) of a dlistint_t list
	* @head: input dlistint_t list
	*
	* Return: sum of all data on success
	*					0 if list is empty
	*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
