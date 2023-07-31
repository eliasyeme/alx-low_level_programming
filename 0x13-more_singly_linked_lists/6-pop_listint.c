#include "lists.h"

/**
	* pop_listint - remove element at the head
	* @head: input list
	*
	* Return: data of the removed element
	*/
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *tmp = *head;

	if (tmp)
	{
		i = tmp->n;
		*head = (*head)->next;
		tmp->next = NULL;
		free(tmp);
	}

	return (i);
}
